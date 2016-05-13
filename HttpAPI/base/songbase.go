package base

const (
	SrcNetease = 1
	SrcQQMusic = 2
	SrcXiami   = 3
	SrcKuwo    = 4
)

//Author defines universal Author struct
type Author struct {
	Name     string
	URL      string
	Songnum  uint
	Albumnum uint
	PicURL   string
}

//Album defines universal album structure
type Album struct {
	Name string
	URL  string
}

//Lyrics defines universal lyrics URL
type Lyrics struct {
	URL string
}

//Song defines the main structure of universal song apis
type Song struct {
	UID      string
	Name     string
	Author   Author
	Album    Album
	ID       int64
	Source   uint
	URL      string
	MusicURL []string
	Lyrics   Lyrics
    PicURL   string
}

//SearchRet SR
type SearchRet struct {
	NumOfRes int64
	Songs    []Song
}
