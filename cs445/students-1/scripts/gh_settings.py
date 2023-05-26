
from github import Github
from dotenv import load_dotenv

from settings import *

load_dotenv()

gh = Github(os.environ.get("GITHUB_TOKEN"))

class_org = gh.get_organization("fdac22")
class_repo = class_org.get_repo("students")

