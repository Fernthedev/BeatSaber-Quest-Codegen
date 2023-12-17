#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizationDocument)
namespace UnityEngine {
class TextAsset;
}
namespace Polyglot {
struct GoogleDriveDownloadFormat;
}
// Forward declare root types
namespace Polyglot {
class LocalizationDocument;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::LocalizationDocument);
// Type: Polyglot::LocalizationDocument
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15560))
// CS Name: ::Polyglot::LocalizationDocument*
class CORDL_TYPE LocalizationDocument : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field docsId offset 0x10
 __declspec(property(get=__get_docsId, put=__set_docsId)) ::StringW  docsId;

/// @brief Field sheetId offset 0x18
 __declspec(property(get=__get_sheetId, put=__set_sheetId)) ::StringW  sheetId;

/// @brief Field format offset 0x20
 __declspec(property(get=__get_format, put=__set_format)) ::Polyglot::GoogleDriveDownloadFormat  format;

/// @brief Field textAsset offset 0x28
 __declspec(property(get=__get_textAsset, put=__set_textAsset)) ::UnityEngine::TextAsset*  textAsset;

/// @brief Field downloadOnStart offset 0x30
 __declspec(property(get=__get_downloadOnStart, put=__set_downloadOnStart)) bool  downloadOnStart;

 __declspec(property(get=get_TextAsset, put=set_TextAsset)) ::UnityEngine::TextAsset*  TextAsset;

 __declspec(property(get=get_DocsId, put=set_DocsId)) ::StringW  DocsId;

 __declspec(property(get=get_SheetId, put=set_SheetId)) ::StringW  SheetId;

 __declspec(property(get=get_Format, put=set_Format)) ::Polyglot::GoogleDriveDownloadFormat  Format;

 __declspec(property(get=get_DownloadOnStart, put=set_DownloadOnStart)) bool  DownloadOnStart;

constexpr void __set_docsId(::StringW  value) ;

constexpr ::StringW& __get_docsId() ;

constexpr ::StringW const& __get_docsId() const;

constexpr void __set_sheetId(::StringW  value) ;

constexpr ::StringW& __get_sheetId() ;

constexpr ::StringW const& __get_sheetId() const;

constexpr void __set_format(::Polyglot::GoogleDriveDownloadFormat  value) ;

constexpr ::Polyglot::GoogleDriveDownloadFormat& __get_format() ;

constexpr ::Polyglot::GoogleDriveDownloadFormat const& __get_format() const;

constexpr void __set_textAsset(::UnityEngine::TextAsset*  value) ;

constexpr ::UnityEngine::TextAsset* __get_textAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> __get_textAsset() const;

constexpr void __set_downloadOnStart(bool  value) ;

constexpr bool& __get_downloadOnStart() ;

constexpr bool const& __get_downloadOnStart() const;

/// @brief Method get_TextAsset addr 0x2804160 size 0x8 virtual false final false
inline ::UnityEngine::TextAsset* get_TextAsset() ;

/// @brief Method set_TextAsset addr 0x2804168 size 0x8 virtual false final false
inline void set_TextAsset(::UnityEngine::TextAsset*  value) ;

/// @brief Method get_DocsId addr 0x2804170 size 0x8 virtual false final false
inline ::StringW get_DocsId() ;

/// @brief Method set_DocsId addr 0x2804178 size 0x8 virtual false final false
inline void set_DocsId(::StringW  value) ;

/// @brief Method get_SheetId addr 0x2804180 size 0x8 virtual false final false
inline ::StringW get_SheetId() ;

/// @brief Method set_SheetId addr 0x2804188 size 0x8 virtual false final false
inline void set_SheetId(::StringW  value) ;

/// @brief Method get_Format addr 0x2804190 size 0x8 virtual false final false
inline ::Polyglot::GoogleDriveDownloadFormat get_Format() ;

/// @brief Method set_Format addr 0x2804198 size 0x8 virtual false final false
inline void set_Format(::Polyglot::GoogleDriveDownloadFormat  value) ;

/// @brief Method get_DownloadOnStart addr 0x28041a0 size 0x8 virtual false final false
inline bool get_DownloadOnStart() ;

/// @brief Method set_DownloadOnStart addr 0x28041a8 size 0xc virtual false final false
inline void set_DownloadOnStart(bool  value) ;

static inline ::Polyglot::LocalizationDocument* New_ctor() ;

/// @brief Method .ctor addr 0x28041b4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationDocument", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationDocument(LocalizationDocument && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationDocument", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationDocument(LocalizationDocument const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalizationDocument()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LocalizationDocument, 0x38>, "Size mismatch!");

} // namespace end def Polyglot
NEED_NO_BOX(::Polyglot::LocalizationDocument);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizationDocument*, "Polyglot", "LocalizationDocument");
