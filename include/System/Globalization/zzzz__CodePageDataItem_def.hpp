#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CodePageDataItem)
// Forward declare root types
namespace System::Globalization {
class CodePageDataItem;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::CodePageDataItem);
// Type: System.Globalization::CodePageDataItem
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3714))
// CS Name: ::System.Globalization::CodePageDataItem*
class CORDL_TYPE CodePageDataItem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_dataIndex offset 0x10
 __declspec(property(get=__get_m_dataIndex, put=__set_m_dataIndex)) int32_t  m_dataIndex;

/// @brief Field m_uiFamilyCodePage offset 0x14
 __declspec(property(get=__get_m_uiFamilyCodePage, put=__set_m_uiFamilyCodePage)) int32_t  m_uiFamilyCodePage;

/// @brief Field m_webName offset 0x18
 __declspec(property(get=__get_m_webName, put=__set_m_webName)) ::StringW  m_webName;

/// @brief Field m_flags offset 0x20
 __declspec(property(get=__get_m_flags, put=__set_m_flags)) uint32_t  m_flags;

 __declspec(property(get=get_WebName)) ::StringW  WebName;

constexpr void __set_m_dataIndex(int32_t  value) ;

constexpr int32_t& __get_m_dataIndex() ;

constexpr int32_t const& __get_m_dataIndex() const;

constexpr void __set_m_uiFamilyCodePage(int32_t  value) ;

constexpr int32_t& __get_m_uiFamilyCodePage() ;

constexpr int32_t const& __get_m_uiFamilyCodePage() const;

constexpr void __set_m_webName(::StringW  value) ;

constexpr ::StringW& __get_m_webName() ;

constexpr ::StringW const& __get_m_webName() const;

constexpr void __set_m_flags(uint32_t  value) ;

constexpr uint32_t& __get_m_flags() ;

constexpr uint32_t const& __get_m_flags() const;

static inline void setStaticF_sep(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_sep() ;

static inline ::System::Globalization::CodePageDataItem* New_ctor(int32_t  dataIndex) ;

/// @brief Method .ctor addr 0x256c58c size 0xa4 virtual false final false
inline void _ctor(int32_t  dataIndex) ;

/// @brief Method CreateString addr 0x256c630 size 0xb4 virtual false final false
static inline ::StringW CreateString(::StringW  pStrings, uint32_t  index) ;

/// @brief Method get_WebName addr 0x256c6e4 size 0xbc virtual false final false
inline ::StringW get_WebName() ;

// Ctor Parameters [CppParam { name: "", ty: "CodePageDataItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CodePageDataItem(CodePageDataItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodePageDataItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodePageDataItem(CodePageDataItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CodePageDataItem()  = default;
public:


// Fields

// Static field sep


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::CodePageDataItem, 0x28>, "Size mismatch!");

} // namespace end def System::Globalization
NEED_NO_BOX(::System::Globalization::CodePageDataItem);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CodePageDataItem*, "System.Globalization", "CodePageDataItem");
