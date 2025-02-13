import yt_dlp

def download_youtube_video(url, output_path="downloads"):
    ydl_opts = {
        'outtmpl': f'{output_path}/%(title)s.%(ext)s',
        'format': 'mp4/best',  # Avoid separate video/audio streams
    }

    with yt_dlp.YoutubeDL(ydl_opts) as ydl:
        ydl.download([url])

if _name_ == "_main_":
    video_url = input("Enter YouTube URL: ")
    download_youtube_video(video_url)