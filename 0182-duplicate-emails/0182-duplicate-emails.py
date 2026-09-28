import pandas as pd

def duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    result = person[person.duplicated("email", keep=False)]
    result = result[["email"]].drop_duplicates()
    result = result.rename(columns={"email": "Email"})
    return result