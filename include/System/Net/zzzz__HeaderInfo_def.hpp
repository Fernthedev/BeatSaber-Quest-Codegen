#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HeaderInfo)
namespace System::Net {
class HeaderParser;
}
// Forward declare root types
namespace System::Net {
class HeaderInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HeaderInfo);
// Type: System.Net::HeaderInfo
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9102))
// CS Name: ::System.Net::HeaderInfo*
class CORDL_TYPE HeaderInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field IsRequestRestricted offset 0x10
 __declspec(property(get=__get_IsRequestRestricted, put=__set_IsRequestRestricted)) bool  IsRequestRestricted;

/// @brief Field IsResponseRestricted offset 0x11
 __declspec(property(get=__get_IsResponseRestricted, put=__set_IsResponseRestricted)) bool  IsResponseRestricted;

/// @brief Field Parser offset 0x18
 __declspec(property(get=__get_Parser, put=__set_Parser)) ::System::Net::HeaderParser*  Parser;

/// @brief Field HeaderName offset 0x20
 __declspec(property(get=__get_HeaderName, put=__set_HeaderName)) ::StringW  HeaderName;

/// @brief Field AllowMultiValues offset 0x28
 __declspec(property(get=__get_AllowMultiValues, put=__set_AllowMultiValues)) bool  AllowMultiValues;

constexpr void __set_IsRequestRestricted(bool  value) ;

constexpr bool& __get_IsRequestRestricted() ;

constexpr bool const& __get_IsRequestRestricted() const;

constexpr void __set_IsResponseRestricted(bool  value) ;

constexpr bool& __get_IsResponseRestricted() ;

constexpr bool const& __get_IsResponseRestricted() const;

constexpr void __set_Parser(::System::Net::HeaderParser*  value) ;

constexpr ::System::Net::HeaderParser* __get_Parser() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HeaderParser*> __get_Parser() const;

constexpr void __set_HeaderName(::StringW  value) ;

constexpr ::StringW& __get_HeaderName() ;

constexpr ::StringW const& __get_HeaderName() const;

constexpr void __set_AllowMultiValues(bool  value) ;

constexpr bool& __get_AllowMultiValues() ;

constexpr bool const& __get_AllowMultiValues() const;

static inline ::System::Net::HeaderInfo* New_ctor(::StringW  name, bool  requestRestricted, bool  responseRestricted, bool  multi, ::System::Net::HeaderParser*  p) ;

/// @brief Method .ctor addr 0x29a5f04 size 0x54 virtual false final false
inline void _ctor(::StringW  name, bool  requestRestricted, bool  responseRestricted, bool  multi, ::System::Net::HeaderParser*  p) ;

// Ctor Parameters [CppParam { name: "", ty: "HeaderInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HeaderInfo(HeaderInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeaderInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeaderInfo(HeaderInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HeaderInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HeaderInfo, 0x30>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::HeaderInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HeaderInfo*, "System.Net", "HeaderInfo");
