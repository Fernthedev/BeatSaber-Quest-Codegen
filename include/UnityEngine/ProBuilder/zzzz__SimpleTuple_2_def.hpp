#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleTuple_2)
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
template<::il2cpp_utils::il2cpp_reference_type T1>
struct SimpleTuple_2<T1,::UnityEngine::ProBuilder::Edge>;
}
namespace UnityEngine::ProBuilder {
template<::il2cpp_utils::il2cpp_reference_type T1>
struct SimpleTuple_2<T1,::UnityEngine::Vector3>;
}
namespace UnityEngine::ProBuilder {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
struct SimpleTuple_2<T1,T2>;
}
namespace UnityEngine::ProBuilder {
template<::il2cpp_utils::il2cpp_reference_type T1>
struct SimpleTuple_2<T1,int32_t>;
}
namespace UnityEngine::ProBuilder {
template<>
struct SimpleTuple_2<float_t,::UnityEngine::Vector2>;
}
namespace UnityEngine::ProBuilder {
template<>
struct SimpleTuple_2<int32_t,int32_t>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ProBuilder::SimpleTuple_2);
// Type: UnityEngine.ProBuilder::SimpleTuple`2
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12201))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12201), inst: 5314 })
// CS Name: ::UnityEngine.ProBuilder::SimpleTuple`2<T1,T2>
struct CORDL_TYPE SimpleTuple_2<T1,::UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Item1 offset 0x0
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x8
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) ::UnityEngine::Vector3  m_Item2;

 __declspec(property(get=get_item1, put=set_item1)) T1  item1;

 __declspec(property(get=get_item2, put=set_item2)) ::UnityEngine::Vector3  item2;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Item2() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Item2() const;

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item1(T1  value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item2(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, ::UnityEngine::Vector3  item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(T1  m_Item1, ::UnityEngine::Vector3  m_Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SimpleTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SimpleTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12201))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12201), inst: 4978 })
// CS Name: ::UnityEngine.ProBuilder::SimpleTuple`2<T1,T2>
struct CORDL_TYPE SimpleTuple_2<float_t,::UnityEngine::Vector2> : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_Item1 offset 0x0
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) float_t  m_Item1;

/// @brief Field m_Item2 offset 0x4
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) ::UnityEngine::Vector2  m_Item2;

 __declspec(property(get=get_item1, put=set_item1)) float_t  item1;

 __declspec(property(get=get_item2, put=set_item2)) ::UnityEngine::Vector2  item2;

constexpr void __set_m_Item1(float_t  value) ;

constexpr float_t& __get_m_Item1() ;

constexpr float_t const& __get_m_Item1() const;

constexpr void __set_m_Item2(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Item2() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Item2() const;

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item1(float_t  value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item2(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(float_t  item1, ::UnityEngine::Vector2  item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Item1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(float_t  m_Item1, ::UnityEngine::Vector2  m_Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SimpleTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SimpleTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12201))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12201), inst: 4974 })
// CS Name: ::UnityEngine.ProBuilder::SimpleTuple`2<T1,T2>
struct CORDL_TYPE SimpleTuple_2<T1,::UnityEngine::ProBuilder::Edge> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Item1 offset 0x0
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x8
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) ::UnityEngine::ProBuilder::Edge  m_Item2;

 __declspec(property(get=get_item1, put=set_item1)) T1  item1;

 __declspec(property(get=get_item2, put=set_item2)) ::UnityEngine::ProBuilder::Edge  item2;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(::UnityEngine::ProBuilder::Edge  value) ;

constexpr ::UnityEngine::ProBuilder::Edge& __get_m_Item2() ;

constexpr ::UnityEngine::ProBuilder::Edge const& __get_m_Item2() const;

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item1(T1  value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::Edge get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item2(::UnityEngine::ProBuilder::Edge  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, ::UnityEngine::ProBuilder::Edge  item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "::UnityEngine::ProBuilder::Edge", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(T1  m_Item1, ::UnityEngine::ProBuilder::Edge  m_Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SimpleTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SimpleTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12201))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12201), inst: 1629 })
// CS Name: ::UnityEngine.ProBuilder::SimpleTuple`2<T1,T2>
struct CORDL_TYPE SimpleTuple_2<T1,int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Item1 offset 0x0
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x8
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) int32_t  m_Item2;

 __declspec(property(get=get_item1, put=set_item1)) T1  item1;

 __declspec(property(get=get_item2, put=set_item2)) int32_t  item2;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(int32_t  value) ;

constexpr int32_t& __get_m_Item2() ;

constexpr int32_t const& __get_m_Item2() const;

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item1(T1  value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item2(int32_t  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, int32_t  item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(T1  m_Item1, int32_t  m_Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SimpleTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SimpleTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12201))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12201), inst: 533 })
// CS Name: ::UnityEngine.ProBuilder::SimpleTuple`2<T1,T2>
struct CORDL_TYPE SimpleTuple_2<int32_t,int32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Item1 offset 0x0
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) int32_t  m_Item1;

/// @brief Field m_Item2 offset 0x4
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) int32_t  m_Item2;

 __declspec(property(get=get_item1, put=set_item1)) int32_t  item1;

 __declspec(property(get=get_item2, put=set_item2)) int32_t  item2;

constexpr void __set_m_Item1(int32_t  value) ;

constexpr int32_t& __get_m_Item1() ;

constexpr int32_t const& __get_m_Item1() const;

constexpr void __set_m_Item2(int32_t  value) ;

constexpr int32_t& __get_m_Item2() ;

constexpr int32_t const& __get_m_Item2() const;

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item1(int32_t  value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item2(int32_t  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  item1, int32_t  item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Item1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(int32_t  m_Item1, int32_t  m_Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SimpleTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SimpleTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SimpleTuple`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12201))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12201), inst: 81 })
// CS Name: ::UnityEngine.ProBuilder::SimpleTuple`2<T1,T2>
struct CORDL_TYPE SimpleTuple_2<T1,T2> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Item1 offset 0x0
 __declspec(property(get=__get_m_Item1, put=__set_m_Item1)) T1  m_Item1;

/// @brief Field m_Item2 offset 0x8
 __declspec(property(get=__get_m_Item2, put=__set_m_Item2)) T2  m_Item2;

 __declspec(property(get=get_item1, put=set_item1)) T1  item1;

 __declspec(property(get=get_item2, put=set_item2)) T2  item2;

constexpr void __set_m_Item1(T1  value) ;

constexpr T1& __get_m_Item1() ;

constexpr T1 const& __get_m_Item1() const;

constexpr void __set_m_Item2(T2  value) ;

constexpr T2& __get_m_Item2() ;

constexpr T2 const& __get_m_Item2() const;

/// @brief Method get_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_item1() ;

/// @brief Method set_item1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item1(T1  value) ;

/// @brief Method get_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T2 get_item2() ;

/// @brief Method set_item2 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_item2(T2  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  item1, T2  item2) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "T2", modifiers: "", def_value: None }]
constexpr SimpleTuple_2(T1  m_Item1, T2  m_Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SimpleTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SimpleTuple_2()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ProBuilder::SimpleTuple_2, "UnityEngine.ProBuilder", "SimpleTuple`2");
