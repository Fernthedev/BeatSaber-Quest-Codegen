#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPoolBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MemoryPool_1)
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
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
class MemoryPool_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class MemoryPool_1<TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPool_1);
// Type: Zenject::MemoryPool`1
// Type: Zenject::MemoryPool`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11049)), TypeDefinitionIndex(TypeDefinitionIndex(11038)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11049), inst: 2752 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11038), inst: 2 })
// CS Name: ::Zenject::MemoryPool`1<TValue>*
class CORDL_TYPE MemoryPool_1<TValue> : public ::Zenject::MemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::MemoryPoolBase_1<TValue>)]{};

/// @brief Convert operator to "::Zenject::IMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IMemoryPool"
constexpr operator  ::Zenject::IMemoryPool*() noexcept;

/// @brief Convert operator to "::Zenject::IFactory_1<TValue>"
constexpr operator  ::Zenject::IFactory_1<TValue>*() noexcept;

/// @brief Convert operator to "::Zenject::IFactory"
constexpr operator  ::Zenject::IFactory*() noexcept;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue Spawn() ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Reinitialize(TValue  item) ;

/// @brief Method Zenject.IFactory<TValue>.Create addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue Zenject_IFactory_TValue__Create() ;

static inline ::Zenject::MemoryPool_1<TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryPool_1(MemoryPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryPool_1(MemoryPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemoryPool_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPool_1, "Zenject", "MemoryPool`1");
