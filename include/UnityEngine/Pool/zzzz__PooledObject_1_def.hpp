#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PooledObject_1)
namespace System {
class IDisposable;
}
namespace UnityEngine::Pool {
template<typename T>
class IObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Pool {
template<typename T>
struct PooledObject_1;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type T>
struct PooledObject_1<T>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Pool::PooledObject_1);
// Type: UnityEngine.Pool::PooledObject`1
// Type: UnityEngine.Pool::PooledObject`1
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10445))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10445), inst: 2 })
// CS Name: ::UnityEngine.Pool::PooledObject`1<T>
struct CORDL_TYPE PooledObject_1<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ToReturn offset 0x0
 __declspec(property(get=__get_m_ToReturn, put=__set_m_ToReturn)) T  m_ToReturn;

/// @brief Field m_Pool offset 0x8
 __declspec(property(get=__get_m_Pool, put=__set_m_Pool)) ::UnityEngine::Pool::IObjectPool_1<T>*  m_Pool;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_ToReturn(T  value) ;

constexpr T& __get_m_ToReturn() ;

constexpr T const& __get_m_ToReturn() const;

constexpr void __set_m_Pool(::UnityEngine::Pool::IObjectPool_1<T>*  value) ;

constexpr ::UnityEngine::Pool::IObjectPool_1<T>* __get_m_Pool() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Pool::IObjectPool_1<T>*> __get_m_Pool() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  value, ::UnityEngine::Pool::IObjectPool_1<T>*  pool) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Pool", ty: "::UnityEngine::Pool::IObjectPool_1<T>*", modifiers: "", def_value: None }]
constexpr PooledObject_1(T  m_ToReturn, ::UnityEngine::Pool::IObjectPool_1<T>*  m_Pool) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PooledObject_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PooledObject_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Pool::PooledObject_1, "UnityEngine.Pool", "PooledObject`1");
