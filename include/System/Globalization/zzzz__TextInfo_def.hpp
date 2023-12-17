#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextInfo)
namespace System::Globalization {
class CultureData;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class ICloneable;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Globalization {
class TextInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::TextInfo);
// Type: System.Globalization::TextInfo
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3706))
// CS Name: ::System.Globalization::TextInfo*
class CORDL_TYPE TextInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field wordSeparatorMask offset 0x0
static constexpr int32_t  wordSeparatorMask{static_cast<int32_t>(0x1ffcf800)};

/// @brief Field m_listSeparator offset 0x10
 __declspec(property(get=__get_m_listSeparator, put=__set_m_listSeparator)) ::StringW  m_listSeparator;

/// @brief Field m_isReadOnly offset 0x18
 __declspec(property(get=__get_m_isReadOnly, put=__set_m_isReadOnly)) bool  m_isReadOnly;

/// @brief Field m_cultureName offset 0x20
 __declspec(property(get=__get_m_cultureName, put=__set_m_cultureName)) ::StringW  m_cultureName;

/// @brief Field m_cultureData offset 0x28
 __declspec(property(get=__get_m_cultureData, put=__set_m_cultureData)) ::System::Globalization::CultureData*  m_cultureData;

/// @brief Field m_textInfoName offset 0x30
 __declspec(property(get=__get_m_textInfoName, put=__set_m_textInfoName)) ::StringW  m_textInfoName;

/// @brief Field m_IsAsciiCasingSameAsInvariant offset 0x38
 __declspec(property(get=__get_m_IsAsciiCasingSameAsInvariant, put=__set_m_IsAsciiCasingSameAsInvariant)) ::System::Nullable_1<bool>  m_IsAsciiCasingSameAsInvariant;

/// @brief Field customCultureName offset 0x40
 __declspec(property(get=__get_customCultureName, put=__set_customCultureName)) ::StringW  customCultureName;

/// @brief Field m_nDataItem offset 0x48
 __declspec(property(get=__get_m_nDataItem, put=__set_m_nDataItem)) int32_t  m_nDataItem;

/// @brief Field m_useUserOverride offset 0x4c
 __declspec(property(get=__get_m_useUserOverride, put=__set_m_useUserOverride)) bool  m_useUserOverride;

/// @brief Field m_win32LangID offset 0x50
 __declspec(property(get=__get_m_win32LangID, put=__set_m_win32LangID)) int32_t  m_win32LangID;

 __declspec(property(get=get_CultureName)) ::StringW  CultureName;

 __declspec(property(get=get_IsAsciiCasingSameAsInvariant)) bool  IsAsciiCasingSameAsInvariant;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set_m_listSeparator(::StringW  value) ;

constexpr ::StringW& __get_m_listSeparator() ;

constexpr ::StringW const& __get_m_listSeparator() const;

constexpr void __set_m_isReadOnly(bool  value) ;

constexpr bool& __get_m_isReadOnly() ;

constexpr bool const& __get_m_isReadOnly() const;

constexpr void __set_m_cultureName(::StringW  value) ;

constexpr ::StringW& __get_m_cultureName() ;

constexpr ::StringW const& __get_m_cultureName() const;

constexpr void __set_m_cultureData(::System::Globalization::CultureData*  value) ;

constexpr ::System::Globalization::CultureData* __get_m_cultureData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureData*> __get_m_cultureData() const;

constexpr void __set_m_textInfoName(::StringW  value) ;

constexpr ::StringW& __get_m_textInfoName() ;

constexpr ::StringW const& __get_m_textInfoName() const;

constexpr void __set_m_IsAsciiCasingSameAsInvariant(::System::Nullable_1<bool>  value) ;

constexpr ::System::Nullable_1<bool>& __get_m_IsAsciiCasingSameAsInvariant() ;

constexpr ::System::Nullable_1<bool> const& __get_m_IsAsciiCasingSameAsInvariant() const;

static inline void setStaticF_s_Invariant(::System::Globalization::TextInfo*  value) ;

static inline ::System::Globalization::TextInfo* getStaticF_s_Invariant() ;

constexpr void __set_customCultureName(::StringW  value) ;

constexpr ::StringW& __get_customCultureName() ;

constexpr ::StringW const& __get_customCultureName() const;

constexpr void __set_m_nDataItem(int32_t  value) ;

constexpr int32_t& __get_m_nDataItem() ;

constexpr int32_t const& __get_m_nDataItem() const;

constexpr void __set_m_useUserOverride(bool  value) ;

constexpr bool& __get_m_useUserOverride() ;

constexpr bool const& __get_m_useUserOverride() const;

constexpr void __set_m_win32LangID(int32_t  value) ;

constexpr int32_t& __get_m_win32LangID() ;

constexpr int32_t const& __get_m_win32LangID() const;

/// @brief Method get_Invariant addr 0x2567a00 size 0x9c virtual false final false
static inline ::System::Globalization::TextInfo* get_Invariant() ;

static inline ::System::Globalization::TextInfo* New_ctor(::System::Globalization::CultureData*  cultureData) ;

/// @brief Method .ctor addr 0x2567e40 size 0x3c virtual false final false
inline void _ctor(::System::Globalization::CultureData*  cultureData) ;

/// @brief Method OnDeserializing addr 0x2567e7c size 0x8 virtual false final false
inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext  ctx) ;

/// @brief Method OnDeserialized addr 0x2567e84 size 0xe4 virtual false final false
inline void OnDeserialized() ;

/// @brief Method OnDeserialized addr 0x2567f68 size 0x4 virtual false final false
inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext  ctx) ;

/// @brief Method OnSerializing addr 0x2567f6c size 0x80 virtual false final false
inline void OnSerializing(::System::Runtime::Serialization::StreamingContext  ctx) ;

/// @brief Method get_CultureName addr 0x2567fec size 0x8 virtual false final false
inline ::StringW get_CultureName() ;

/// @brief Method Clone addr 0x2567ff4 size 0x88 virtual true final false
inline ::System::Object* Clone() ;

/// @brief Method SetReadOnlyState addr 0x256807c size 0xc virtual false final false
inline void SetReadOnlyState(bool  readOnly) ;

/// @brief Method ToLower addr 0x2568088 size 0x64 virtual true final false
inline char16_t ToLower(char16_t  c) ;

/// @brief Method ToLower addr 0x2568660 size 0x58 virtual true final false
inline ::StringW ToLower(::StringW  str) ;

/// @brief Method ToLowerAsciiInvariant addr 0x2568200 size 0x1c virtual false final false
static inline char16_t ToLowerAsciiInvariant(char16_t  c) ;

/// @brief Method ToUpper addr 0x256879c size 0x64 virtual true final false
inline char16_t ToUpper(char16_t  c) ;

/// @brief Method ToUpper addr 0x2568c80 size 0x58 virtual true final false
inline ::StringW ToUpper(::StringW  str) ;

/// @brief Method ToUpperAsciiInvariant addr 0x2568800 size 0x1c virtual false final false
static inline char16_t ToUpperAsciiInvariant(char16_t  c) ;

/// @brief Method IsAscii addr 0x25680ec size 0x10 virtual false final false
static inline bool IsAscii(char16_t  c) ;

/// @brief Method get_IsAsciiCasingSameAsInvariant addr 0x25680fc size 0x104 virtual false final false
inline bool get_IsAsciiCasingSameAsInvariant() ;

/// @brief Method Equals addr 0x2568dbc size 0xa0 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2568e5c size 0x20 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2568e7c size 0x58 virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToTitleCase addr 0x2568ed4 size 0x33c virtual false final false
inline ::StringW ToTitleCase(::StringW  str) ;

/// @brief Method AddNonLetter addr 0x2569394 size 0x9c virtual false final false
static inline int32_t AddNonLetter(ByRef<::System::Text::StringBuilder*>  result, ByRef<::StringW>  input, int32_t  inputIndex, int32_t  charLen) ;

/// @brief Method AddTitlecaseLetter addr 0x2569210 size 0x14c virtual false final false
inline int32_t AddTitlecaseLetter(ByRef<::System::Text::StringBuilder*>  result, ByRef<::StringW>  input, int32_t  inputIndex, int32_t  charLen) ;

/// @brief Method IsWordSeparator addr 0x2569378 size 0x1c virtual false final false
static inline bool IsWordSeparator(::System::Globalization::UnicodeCategory  category) ;

/// @brief Method IsLetterCategory addr 0x256935c size 0x1c virtual false final false
static inline bool IsLetterCategory(::System::Globalization::UnicodeCategory  uc) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x2569430 size 0x4 virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method ToUpperInternal addr 0x2568cd8 size 0xe4 virtual false final false
inline ::StringW ToUpperInternal(::StringW  str) ;

/// @brief Method ToLowerInternal addr 0x25686b8 size 0xe4 virtual false final false
inline ::StringW ToLowerInternal(::StringW  str) ;

/// @brief Method ToUpperInternal addr 0x256881c size 0x464 virtual false final false
inline char16_t ToUpperInternal(char16_t  c) ;

/// @brief Method ToLowerInternal addr 0x256821c size 0x444 virtual false final false
inline char16_t ToLowerInternal(char16_t  c) ;

/// @brief Method ToUpperAsciiInvariant addr 0x2569434 size 0x90 virtual false final false
inline void ToUpperAsciiInvariant(::System::ReadOnlySpan_1<char16_t>  source, ::System::Span_1<char16_t>  destination) ;

/// @brief Method ChangeCase addr 0x25694c4 size 0x140 virtual false final false
inline void ChangeCase(::System::ReadOnlySpan_1<char16_t>  source, ::System::Span_1<char16_t>  destination, bool  toUpper) ;

static inline ::System::Globalization::TextInfo* New_ctor() ;

/// @brief Method .ctor addr 0x2569604 size 0x38 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextInfo(TextInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextInfo(TextInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextInfo()  = default;
public:


// Fields

// Static field s_Invariant


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TextInfo, 0x58>, "Size mismatch!");

} // namespace end def System::Globalization
NEED_NO_BOX(::System::Globalization::TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TextInfo*, "System.Globalization", "TextInfo");
