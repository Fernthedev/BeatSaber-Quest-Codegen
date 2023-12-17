#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeclarationOfMajority)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
struct __DeclarationOfMajority__Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
struct __DeclarationOfMajority__Choice;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class DeclarationOfMajority;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority);
// Type: ::Choice
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(185))
// CS Name: ::DeclarationOfMajority::Choice
struct CORDL_TYPE __DeclarationOfMajority__Choice : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____DeclarationOfMajority__Choice_Unwrapped
enum struct ____DeclarationOfMajority__Choice_Unwrapped : int32_t {
__E_NotYoungerThan = static_cast<int32_t>(0x0),
__E_FullAgeAtCountry = static_cast<int32_t>(0x1),
__E_DateOfBirth = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NotYoungerThan value: static_cast<int32_t>(0x0)
static ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice const NotYoungerThan;

/// @brief Field FullAgeAtCountry value: static_cast<int32_t>(0x1)
static ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice const FullAgeAtCountry;

/// @brief Field DateOfBirth value: static_cast<int32_t>(0x2)
static ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice const DateOfBirth;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____DeclarationOfMajority__Choice_Unwrapped () const noexcept {
return std::bit_cast<____DeclarationOfMajority__Choice_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __DeclarationOfMajority__Choice(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DeclarationOfMajority__Choice(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DeclarationOfMajority__Choice()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice, 0x4>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::DeclarationOfMajority
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(186))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::DeclarationOfMajority*
class CORDL_TYPE DeclarationOfMajority : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
using Choice = ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field declaration offset 0x10
 __declspec(property(get=__get_declaration, put=__set_declaration)) ::Org::BouncyCastle::Asn1::Asn1TaggedObject*  declaration;

 __declspec(property(get=get_Type)) ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice  Type;

 __declspec(property(get=get_NotYoungerThan)) int32_t  NotYoungerThan;

 __declspec(property(get=get_FullAgeAtCountry)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  FullAgeAtCountry;

 __declspec(property(get=get_DateOfBirth)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  DateOfBirth;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_declaration(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObject* __get_declaration() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1TaggedObject*> __get_declaration() const;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(int32_t  notYoungerThan) ;

/// @brief Method .ctor addr 0xf77e84 size 0xb4 virtual false final false
inline void _ctor(int32_t  notYoungerThan) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(bool  fullAge, ::StringW  country) ;

/// @brief Method .ctor addr 0xf77f38 size 0x220 virtual false final false
inline void _ctor(bool  fullAge, ::StringW  country) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  dateOfBirth) ;

/// @brief Method .ctor addr 0xf78158 size 0x84 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  dateOfBirth) ;

/// @brief Method GetInstance addr 0xf781dc size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  o) ;

/// @brief Method .ctor addr 0xf78364 size 0xc0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  o) ;

/// @brief Method ToAsn1Object addr 0xf78424 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method get_Type addr 0xf7842c size 0x1c virtual false final false
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice get_Type() ;

/// @brief Method get_NotYoungerThan addr 0xf78448 size 0x40 virtual true final false
inline int32_t get_NotYoungerThan() ;

/// @brief Method get_FullAgeAtCountry addr 0xf78488 size 0x38 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_FullAgeAtCountry() ;

/// @brief Method get_DateOfBirth addr 0xf784c0 size 0x38 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_DateOfBirth() ;

// Ctor Parameters [CppParam { name: "", ty: "DeclarationOfMajority", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeclarationOfMajority(DeclarationOfMajority && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeclarationOfMajority", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeclarationOfMajority(DeclarationOfMajority const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DeclarationOfMajority()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice, "Org.BouncyCastle.Asn1.IsisMtt.X509", "DeclarationOfMajority/Choice");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "DeclarationOfMajority");
