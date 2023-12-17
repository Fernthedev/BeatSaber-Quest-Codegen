#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DisplayText)
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DisplayText;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DisplayText);
// Type: Org.BouncyCastle.Asn1.X509::DisplayText
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(356))
// CS Name: ::Org.BouncyCastle.Asn1.X509::DisplayText*
class CORDL_TYPE DisplayText : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field ContentTypeIA5String offset 0x0
static constexpr int32_t  ContentTypeIA5String{static_cast<int32_t>(0x0)};

/// @brief Field ContentTypeBmpString offset 0x0
static constexpr int32_t  ContentTypeBmpString{static_cast<int32_t>(0x1)};

/// @brief Field ContentTypeUtf8String offset 0x0
static constexpr int32_t  ContentTypeUtf8String{static_cast<int32_t>(0x2)};

/// @brief Field ContentTypeVisibleString offset 0x0
static constexpr int32_t  ContentTypeVisibleString{static_cast<int32_t>(0x3)};

/// @brief Field DisplayTextMaximumSize offset 0x0
static constexpr int32_t  DisplayTextMaximumSize{static_cast<int32_t>(0xc8)};

/// @brief Field contentType offset 0x10
 __declspec(property(get=__get_contentType, put=__set_contentType)) int32_t  contentType;

/// @brief Field contents offset 0x18
 __declspec(property(get=__get_contents, put=__set_contents)) ::Org::BouncyCastle::Asn1::IAsn1String*  contents;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_contentType(int32_t  value) ;

constexpr int32_t& __get_contentType() ;

constexpr int32_t const& __get_contentType() const;

constexpr void __set_contents(::Org::BouncyCastle::Asn1::IAsn1String*  value) ;

constexpr ::Org::BouncyCastle::Asn1::IAsn1String* __get_contents() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IAsn1String*> __get_contents() const;

static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* New_ctor(int32_t  type, ::StringW  text) ;

/// @brief Method .ctor addr 0x118b944 size 0x16c virtual false final false
inline void _ctor(int32_t  type, ::StringW  text) ;

static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* New_ctor(::StringW  text) ;

/// @brief Method .ctor addr 0x118bab0 size 0xa4 virtual false final false
inline void _ctor(::StringW  text) ;

static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* New_ctor(::Org::BouncyCastle::Asn1::IAsn1String*  contents) ;

/// @brief Method .ctor addr 0x118bb54 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::IAsn1String*  contents) ;

/// @brief Method GetInstance addr 0x118bb7c size 0x180 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* GetInstance(::System::Object*  obj) ;

/// @brief Method ToAsn1Object addr 0x118bcfc size 0x78 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method GetString addr 0x118bd74 size 0xa0 virtual false final false
inline ::StringW GetString() ;

// Ctor Parameters [CppParam { name: "", ty: "DisplayText", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisplayText(DisplayText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisplayText", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisplayText(DisplayText const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DisplayText()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DisplayText, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DisplayText);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DisplayText*, "Org.BouncyCastle.Asn1.X509", "DisplayText");
