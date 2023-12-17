#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StaticMemoryPool_1)
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
template<typename TValue>
class IMemoryPool_1;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class StaticMemoryPool_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class StaticMemoryPool_1<TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::StaticMemoryPool_1);
// Type: Zenject::StaticMemoryPool`1
// Type: Zenject::StaticMemoryPool`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 160 }), TypeDefinitionIndex(TypeDefinitionIndex(11086)), TypeDefinitionIndex(TypeDefinitionIndex(11085))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11086), inst: 2 })
// CS Name: ::Zenject::StaticMemoryPool`1<TValue>*
class CORDL_TYPE StaticMemoryPool_1<TValue> : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPoolBase_1<TValue>)]{};

/// @brief Field _onSpawnMethod offset 0x28
 __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod)) ::System::Action_1<TValue>*  _onSpawnMethod;

 __declspec(property(put=set_OnSpawnMethod)) ::System::Action_1<TValue>*  OnSpawnMethod;

/// @brief Convert operator to "::Zenject::IMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool"
constexpr operator  ::Zenject::IMemoryPool*() noexcept;

constexpr void __set__onSpawnMethod(::System::Action_1<TValue>*  value) ;

constexpr ::System::Action_1<TValue>* __get__onSpawnMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TValue>*> __get__onSpawnMethod() const;

static inline ::Zenject::StaticMemoryPool_1<TValue>* New_ctor(::System::Action_1<TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod, int32_t  initialSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_1<TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod, int32_t  initialSize) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnSpawnMethod(::System::Action_1<TValue>*  value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue Spawn() ;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticMemoryPool_1(StaticMemoryPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticMemoryPool_1(StaticMemoryPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticMemoryPool_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPool_1, "Zenject", "StaticMemoryPool`1");
