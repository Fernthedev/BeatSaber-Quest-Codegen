#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(AssemblyLoadEventArgs)
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System {
class AssemblyLoadEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::AssemblyLoadEventArgs);
// Type: System::AssemblyLoadEventArgs
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2351))
// CS Name: ::System::AssemblyLoadEventArgs*
class CORDL_TYPE AssemblyLoadEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::EventArgs)]{};

/// @brief Field <LoadedAssembly>k__BackingField offset 0x10
 __declspec(property(get=__get__LoadedAssembly_k__BackingField, put=__set__LoadedAssembly_k__BackingField)) ::System::Reflection::Assembly*  _LoadedAssembly_k__BackingField;

constexpr void __set__LoadedAssembly_k__BackingField(::System::Reflection::Assembly*  value) ;

constexpr ::System::Reflection::Assembly* __get__LoadedAssembly_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> __get__LoadedAssembly_k__BackingField() const;

static inline ::System::AssemblyLoadEventArgs* New_ctor(::System::Reflection::Assembly*  loadedAssembly) ;

/// @brief Method .ctor addr 0x2521160 size 0x6c virtual false final false
inline void _ctor(::System::Reflection::Assembly*  loadedAssembly) ;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyLoadEventArgs(AssemblyLoadEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyLoadEventArgs(AssemblyLoadEventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssemblyLoadEventArgs()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AssemblyLoadEventArgs, 0x18>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::AssemblyLoadEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::AssemblyLoadEventArgs*, "System", "AssemblyLoadEventArgs");
