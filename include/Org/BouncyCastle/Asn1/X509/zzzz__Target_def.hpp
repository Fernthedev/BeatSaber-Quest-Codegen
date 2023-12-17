#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Target)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
struct __Target__Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
struct __Target__Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Target;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Asn1::X509::__Target__Choice);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Target);
// Type: ::Choice
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(385))
// CS Name: ::Target::Choice
struct CORDL_TYPE __Target__Choice : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Target__Choice_Unwrapped
enum struct ____Target__Choice_Unwrapped : int32_t {
__E_Name = static_cast<int32_t>(0x0),
__E_Group = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Name value: static_cast<int32_t>(0x0)
static ::Org::BouncyCastle::Asn1::X509::__Target__Choice const Name;

/// @brief Field Group value: static_cast<int32_t>(0x1)
static ::Org::BouncyCastle::Asn1::X509::__Target__Choice const Group;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Target__Choice_Unwrapped () const noexcept {
return std::bit_cast<____Target__Choice_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Target__Choice(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Target__Choice(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Target__Choice()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::__Target__Choice, 0x4>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
// Type: Org.BouncyCastle.Asn1.X509::Target
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(386))
// CS Name: ::Org.BouncyCastle.Asn1.X509::Target*
class CORDL_TYPE Target : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
using Choice = ::Org::BouncyCastle::Asn1::X509::__Target__Choice;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field targetName offset 0x10
 __declspec(property(get=__get_targetName, put=__set_targetName)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  targetName;

/// @brief Field targetGroup offset 0x18
 __declspec(property(get=__get_targetGroup, put=__set_targetGroup)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  targetGroup;

 __declspec(property(get=get_TargetGroup)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  TargetGroup;

 __declspec(property(get=get_TargetName)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  TargetName;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_targetName(::Org::BouncyCastle::Asn1::X509::GeneralName*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* __get_targetName() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> __get_targetName() const;

constexpr void __set_targetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* __get_targetGroup() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> __get_targetGroup() const;

/// @brief Method GetInstance addr 0x1197ad0 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::Target* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::Target* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagObj) ;

/// @brief Method .ctor addr 0x1197c58 size 0x114 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagObj) ;

static inline ::Org::BouncyCastle::Asn1::X509::Target* New_ctor(::Org::BouncyCastle::Asn1::X509::__Target__Choice  type, ::Org::BouncyCastle::Asn1::X509::GeneralName*  name) ;

/// @brief Method .ctor addr 0x1197d6c size 0x7c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::__Target__Choice  type, ::Org::BouncyCastle::Asn1::X509::GeneralName*  name) ;

/// @brief Method get_TargetGroup addr 0x1197de8 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_TargetGroup() ;

/// @brief Method get_TargetName addr 0x1197df0 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_TargetName() ;

/// @brief Method ToAsn1Object addr 0x1197df8 size 0x94 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "Target", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Target(Target && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Target", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Target(Target const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Target()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Target, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::__Target__Choice, "Org.BouncyCastle.Asn1.X509", "Target/Choice");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Target);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Target*, "Org.BouncyCastle.Asn1.X509", "Target");
