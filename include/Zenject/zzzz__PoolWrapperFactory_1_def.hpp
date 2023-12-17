#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PoolWrapperFactory_1)
namespace System {
class Object;
}
namespace Zenject {
template<typename TValue>
class IMemoryPool_1;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class PoolWrapperFactory_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type T>
class PoolWrapperFactory_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolWrapperFactory_1);
// Type: Zenject::PoolWrapperFactory`1
// Type: Zenject::PoolWrapperFactory`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11074)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11074), inst: 2 })
// CS Name: ::Zenject::PoolWrapperFactory`1<T>*
class CORDL_TYPE PoolWrapperFactory_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _pool offset 0x10
 __declspec(property(get=__get__pool, put=__set__pool)) ::Zenject::IMemoryPool_1<T>*  _pool;

/// @brief Convert operator to "::Zenject::IFactory_1<T>"
constexpr operator  ::Zenject::IFactory_1<T>*() noexcept;

/// @brief Convert operator to "::Zenject::IFactory"
constexpr operator  ::Zenject::IFactory*() noexcept;

constexpr void __set__pool(::Zenject::IMemoryPool_1<T>*  value) ;

constexpr ::Zenject::IMemoryPool_1<T>* __get__pool() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_1<T>*> __get__pool() const;

static inline ::Zenject::PoolWrapperFactory_1<T>* New_ctor(::Zenject::IMemoryPool_1<T>*  pool) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::IMemoryPool_1<T>*  pool) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final true
inline T Create() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolWrapperFactory_1(PoolWrapperFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolWrapperFactory_1(PoolWrapperFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PoolWrapperFactory_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolWrapperFactory_1, "Zenject", "PoolWrapperFactory`1");
