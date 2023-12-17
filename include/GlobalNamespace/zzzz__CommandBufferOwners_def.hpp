#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBufferOwners)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandBufferOwners;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CommandBufferOwners);
// Type: ::CommandBufferOwners
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15279))
// CS Name: ::CommandBufferOwners*
class CORDL_TYPE CommandBufferOwners : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _owners offset 0x10
 __declspec(property(get=__get__owners, put=__set__owners)) ::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>*  _owners;

/// @brief Field commandBuffer offset 0x18
 __declspec(property(get=__get_commandBuffer, put=__set_commandBuffer)) ::UnityEngine::Rendering::CommandBuffer*  commandBuffer;

 __declspec(property(get=get_NumberOfOwners)) int32_t  NumberOfOwners;

constexpr void __set__owners(::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>* __get__owners() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>*> __get__owners() const;

constexpr void __set_commandBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr ::UnityEngine::Rendering::CommandBuffer* __get_commandBuffer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> __get_commandBuffer() const;

/// @brief Method AddOwner addr 0x28073e8 size 0xa0 virtual false final false
inline void AddOwner(::UnityEngine::Object*  owner) ;

/// @brief Method RemoveOwner addr 0x2807134 size 0x60 virtual false final false
inline void RemoveOwner(::UnityEngine::Object*  owner) ;

/// @brief Method ContainsOwner addr 0x2807390 size 0x58 virtual false final false
inline bool ContainsOwner(::UnityEngine::Object*  owner) ;

/// @brief Method get_NumberOfOwners addr 0x2807194 size 0x48 virtual false final false
inline int32_t get_NumberOfOwners() ;

static inline ::GlobalNamespace::CommandBufferOwners* New_ctor() ;

/// @brief Method .ctor addr 0x2807488 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferOwners", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandBufferOwners(CommandBufferOwners && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferOwners", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandBufferOwners(CommandBufferOwners const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CommandBufferOwners()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandBufferOwners, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferOwners);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferOwners*, "", "CommandBufferOwners");
