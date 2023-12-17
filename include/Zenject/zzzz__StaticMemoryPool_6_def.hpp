#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
CORDL_MODULE_EXPORT(StaticMemoryPool_6)
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class IMemoryPool_6;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class StaticMemoryPool_6;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
class StaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::StaticMemoryPool_6);
// Type: Zenject::StaticMemoryPool`6
// Type: Zenject::StaticMemoryPool`6
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 188 }), TypeDefinitionIndex(TypeDefinitionIndex(11091)), TypeDefinitionIndex(TypeDefinitionIndex(11085))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11091), inst: 6126 })
// CS Name: ::Zenject::StaticMemoryPool`6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*
class CORDL_TYPE StaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPoolBase_1<TValue>)]{};

/// @brief Field _onSpawnMethod offset 0x28
 __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod)) ::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*  _onSpawnMethod;

 __declspec(property(put=set_OnSpawnMethod)) ::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*  OnSpawnMethod;

/// @brief Convert operator to "::Zenject::IMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>"
constexpr operator  ::Zenject::IMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool"
constexpr operator  ::Zenject::IMemoryPool*() noexcept;

constexpr void __set__onSpawnMethod(::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*  value) ;

constexpr ::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>* __get__onSpawnMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*> __get__onSpawnMethod() const;

static inline ::Zenject::StaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>* New_ctor(::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnSpawnMethod(::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*  value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue Spawn(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TParam5  p5) ;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticMemoryPool_6(StaticMemoryPool_6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticMemoryPool_6(StaticMemoryPool_6 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticMemoryPool_6()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPool_6, "Zenject", "StaticMemoryPool`6");
