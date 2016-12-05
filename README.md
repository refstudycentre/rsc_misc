# rsc_misc

Previously called `rsc_custom_admin`

Custom administration, hacks and settings for RSC's library sites.
Badly named for historical reasons. No good reason to rename it now.

What it does:
- Disables the default path aliases for nodes and taxonomy terms
- Disables the default node page
- Populates the search form on search results page
- Removes breadcrumbs if the they were not set by rsc_library (except on admin pages)
- Adds `<meta name="google-site-verification" content="" />` to the site `<head>`
- Adds the content of pdf attachments to the search index
- fix the weight of the sections menu relative to the cached categories menu (obsolete?)
- Alter the search page title
