#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SimpleTuple_3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2,typename T3>
struct SimpleTuple_3;
}
namespace UnityEngine::ProBuilder {
template<::il2cpp_utils::il2cpp_reference_type T3>
struct SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3>;
}
namespace UnityEngine::ProBuilder {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
struct SimpleTuple_3<T1,T2,T3>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ProBuilder::SimpleTuple_3);
// Type: UnityEngine.ProBuilder::SimpleTuple`3
// Type: UnityEngine.ProBuilder::SimpleTuple`3
namespace UnityEngine::ProBuilder {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12202))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12202), inst: 5330 })
// CS Name: ::UnityEngine.ProBuilder::SimpleTuple`3<T1,T2,T3>
struct CORDL_TYPE SimpleTuple_3<T1,T2,T3> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Item1 offset 0x0
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x8
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) T2  m_Item2;

/// @brief Field m_Item3 offset 0x10
 __declspec(property(get=__get_m_Item3, put=__set_m_Item3)) T3  m_Item3;

 __declspec(property(get=get_item1, put=set_item1)) T1  item1;

 __declspec(property(get=get_item2, put=set_item2)) T2  item2;

 __declspec(property(get=get_item3, put=set_item3)) T3  item3;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(T2  value) ;

constexpr T2& __get_m_Item2() ;

constexpr T2 const& __get_m_Item2() const;

constexpr void __set_m_Item3(T3  value) ;

constexpr T3& __get_m_Item3() ;

constexpr T3 const& __get_m_Item3() const;

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item1(T1  value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T2 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item2(T2  value) ;

/// @brief Method get_item3 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T3 get_item3() ;

/// @brief Method set_item3 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item3(T3  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2, T3  item3) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "m_Item3", ty: "T3", modifiers: "", def_value: None }]
constexpr SimpleTuple_3(T1  m_Item1, T2  m_Item2, T3  m_Item3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SimpleTuple_3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SimpleTuple_3()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`3
namespace UnityEngine::ProBuilder {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12202))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12202), inst: 4980 })
// CS Name: ::UnityEngine.ProBuilder::SimpleTuple`3<T1,T2,T3>
struct CORDL_TYPE SimpleTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,T3> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Item1 offset 0x0
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) ::UnityEngine::Vector3  m_Item1;

/// @brief Field m_Item2 offset 0xc
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) ::UnityEngine::Vector3  m_Item2;

/// @brief Field m_Item3 offset 0x18
 __declspec(property(get=__get_m_Item3, put=__set_m_Item3)) T3  m_Item3;

 __declspec(property(get=get_item1, put=set_item1)) ::UnityEngine::Vector3  item1;

 __declspec(property(get=get_item2, put=set_item2)) ::UnityEngine::Vector3  item2;

 __declspec(property(get=get_item3, put=set_item3)) T3  item3;

constexpr void __set_m_Item1(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Item1() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Item1() const;

constexpr void __set_m_Item2(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Item2() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Item2() const;

constexpr void __set_m_Item3(T3  value) ;

constexpr T3& __get_m_Item3() ;

constexpr T3 const& __get_m_Item3() const;

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item1(::UnityEngine::Vector3  value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item2(::UnityEngine::Vector3  value) ;

/// @brief Method get_item3 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T3 get_item3() ;

/// @brief Method set_item3 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item3(T3  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Vector3  item1, ::UnityEngine::Vector3  item2, T3  item3) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Item1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Item3", ty: "T3", modifiers: "", def_value: None }]
constexpr SimpleTuple_3(::UnityEngine::Vector3  m_Item1, ::UnityEngine::Vector3  m_Item2, T3  m_Item3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SimpleTuple_3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SimpleTuple_3()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ProBuilder::SimpleTuple_3, "UnityEngine.ProBuilder", "SimpleTuple`3");
