#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResolveEventArgs)
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System {
class ResolveEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ResolveEventArgs);
// Type: System::ResolveEventArgs
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2465))
// CS Name: ::System::ResolveEventArgs*
class CORDL_TYPE ResolveEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::EventArgs)]{};

/// @brief Field <Name>k__BackingField offset 0x10
 __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <RequestingAssembly>k__BackingField offset 0x18
 __declspec(property(get=__get__RequestingAssembly_k__BackingField, put=__set__RequestingAssembly_k__BackingField)) ::System::Reflection::Assembly*  _RequestingAssembly_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Name_k__BackingField() ;

constexpr ::StringW const& __get__Name_k__BackingField() const;

constexpr void __set__RequestingAssembly_k__BackingField(::System::Reflection::Assembly*  value) ;

constexpr ::System::Reflection::Assembly* __get__RequestingAssembly_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> __get__RequestingAssembly_k__BackingField() const;

static inline ::System::ResolveEventArgs* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x25c02d0 size 0x6c virtual false final false
inline void _ctor(::StringW  name) ;

static inline ::System::ResolveEventArgs* New_ctor(::StringW  name, ::System::Reflection::Assembly*  requestingAssembly) ;

/// @brief Method .ctor addr 0x25c033c size 0x70 virtual false final false
inline void _ctor(::StringW  name, ::System::Reflection::Assembly*  requestingAssembly) ;

// Ctor Parameters [CppParam { name: "", ty: "ResolveEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResolveEventArgs(ResolveEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResolveEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResolveEventArgs(ResolveEventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ResolveEventArgs()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ResolveEventArgs, 0x20>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ResolveEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ResolveEventArgs*, "System", "ResolveEventArgs");
