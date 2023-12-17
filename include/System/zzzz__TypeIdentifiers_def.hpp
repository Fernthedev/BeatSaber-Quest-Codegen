#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeNames_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeIdentifiers)
namespace System {
class __TypeIdentifiers__Display;
}
namespace System {
class TypeIdentifier;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class TypeName;
}
// Forward declare root types
namespace System {
class TypeIdentifiers;
}
namespace System {
class __TypeIdentifiers__Display;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeIdentifiers);
MARK_REF_PTR_T(::System::__TypeIdentifiers__Display);
// Type: ::Display
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2629))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2631))
// CS Name: ::TypeIdentifiers::Display*
class CORDL_TYPE __TypeIdentifiers__Display : public ::System::__TypeNames__ATypeName {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::__TypeNames__ATypeName)]{};

/// @brief Field displayName offset 0x10
 __declspec(property(get=__get_displayName, put=__set_displayName)) ::StringW  displayName;

/// @brief Field internal_name offset 0x18
 __declspec(property(get=__get_internal_name, put=__set_internal_name)) ::StringW  internal_name;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_InternalName)) ::StringW  InternalName;

/// @brief Convert operator to "::System::TypeIdentifier"
constexpr operator  ::System::TypeIdentifier*() noexcept;

/// @brief Convert operator to "::System::TypeName"
constexpr operator  ::System::TypeName*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
constexpr operator  ::System::IEquatable_1<::System::TypeName*>*() noexcept;

constexpr void __set_displayName(::StringW  value) ;

constexpr ::StringW& __get_displayName() ;

constexpr ::StringW const& __get_displayName() const;

constexpr void __set_internal_name(::StringW  value) ;

constexpr ::StringW& __get_internal_name() ;

constexpr ::StringW const& __get_internal_name() const;

static inline ::System::__TypeIdentifiers__Display* New_ctor(::StringW  displayName) ;

/// @brief Method .ctor addr 0x26068d8 size 0x8 virtual false final false
inline void _ctor(::StringW  displayName) ;

/// @brief Method get_DisplayName addr 0x26068e0 size 0x8 virtual true final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_InternalName addr 0x26068e8 size 0x28 virtual true final true
inline ::StringW get_InternalName() ;

/// @brief Method GetInternalName addr 0x2606910 size 0xc virtual false final false
inline ::StringW GetInternalName() ;

// Ctor Parameters [CppParam { name: "", ty: "__TypeIdentifiers__Display", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TypeIdentifiers__Display(__TypeIdentifiers__Display && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TypeIdentifiers__Display", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TypeIdentifiers__Display(__TypeIdentifiers__Display const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TypeIdentifiers__Display()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TypeIdentifiers__Display, 0x20>, "Size mismatch!");

} // namespace end def System
// Type: System::TypeIdentifiers
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2632))
// CS Name: ::System::TypeIdentifiers*
class CORDL_TYPE TypeIdentifiers : public ::System::Object {
public:
// Declarations
using Display = ::System::__TypeIdentifiers__Display;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method FromDisplay addr 0x2606884 size 0x54 virtual false final false
static inline ::System::TypeIdentifier* FromDisplay(::StringW  displayName) ;

// Ctor Parameters [CppParam { name: "", ty: "TypeIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeIdentifiers(TypeIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeIdentifiers(TypeIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeIdentifiers()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::TypeIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeIdentifiers*, "System", "TypeIdentifiers");
NEED_NO_BOX(::System::__TypeIdentifiers__Display);
DEFINE_IL2CPP_ARG_TYPE(::System::__TypeIdentifiers__Display*, "System", "TypeIdentifiers/Display");
