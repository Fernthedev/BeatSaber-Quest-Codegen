#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HyperRect_1)
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
struct HyperRect_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::il2cpp_utils::il2cpp_reference_type T>
struct HyperRect_1<T>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<>
struct HyperRect_1<float_t>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ProBuilder::KdTree::HyperRect_1);
// Type: UnityEngine.ProBuilder.KdTree::HyperRect`1
// Type: UnityEngine.ProBuilder.KdTree::HyperRect`1
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15911))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15911), inst: 391 })
// CS Name: ::UnityEngine.ProBuilder.KdTree::HyperRect`1<T>
struct CORDL_TYPE HyperRect_1<float_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field minPoint offset 0x0
 __declspec(property(get=__get_minPoint, put=__set_minPoint)) ::ArrayW<float_t,::Array<float_t>*>  minPoint;

/// @brief Field maxPoint offset 0x8
 __declspec(property(get=__get_maxPoint, put=__set_maxPoint)) ::ArrayW<float_t,::Array<float_t>*>  maxPoint;

 __declspec(property(get=get_MinPoint, put=set_MinPoint)) ::ArrayW<float_t,::Array<float_t>*>  MinPoint;

 __declspec(property(get=get_MaxPoint, put=set_MaxPoint)) ::ArrayW<float_t,::Array<float_t>*>  MaxPoint;

constexpr void __set_minPoint(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_minPoint() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_minPoint() const;

constexpr void __set_maxPoint(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_maxPoint() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_maxPoint() const;

/// @brief Method get_MinPoint addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<float_t,::Array<float_t>*> get_MinPoint() ;

/// @brief Method set_MinPoint addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_MinPoint(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method get_MaxPoint addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<float_t,::Array<float_t>*> get_MaxPoint() ;

/// @brief Method set_MaxPoint addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_MaxPoint(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method Infinite addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::ProBuilder::KdTree::HyperRect_1<float_t> Infinite(int32_t  dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  math) ;

/// @brief Method GetClosestPoint addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<float_t,::Array<float_t>*> GetClosestPoint(::ArrayW<float_t,::Array<float_t>*>  toPoint, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  math) ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::KdTree::HyperRect_1<float_t> Clone() ;

// Ctor Parameters [CppParam { name: "minPoint", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "maxPoint", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }]
constexpr HyperRect_1(::ArrayW<float_t,::Array<float_t>*>  minPoint, ::ArrayW<float_t,::Array<float_t>*>  maxPoint) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HyperRect_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HyperRect_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::HyperRect`1
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15911))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15911), inst: 2 })
// CS Name: ::UnityEngine.ProBuilder.KdTree::HyperRect`1<T>
struct CORDL_TYPE HyperRect_1<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field minPoint offset 0x0
 __declspec(property(get=__get_minPoint, put=__set_minPoint)) ::ArrayW<T,::Array<T>*>  minPoint;

/// @brief Field maxPoint offset 0x8
 __declspec(property(get=__get_maxPoint, put=__set_maxPoint)) ::ArrayW<T,::Array<T>*>  maxPoint;

 __declspec(property(get=get_MinPoint, put=set_MinPoint)) ::ArrayW<T,::Array<T>*>  MinPoint;

 __declspec(property(get=get_MaxPoint, put=set_MaxPoint)) ::ArrayW<T,::Array<T>*>  MaxPoint;

constexpr void __set_minPoint(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get_minPoint() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get_minPoint() const;

constexpr void __set_maxPoint(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get_maxPoint() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get_maxPoint() const;

/// @brief Method get_MinPoint addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> get_MinPoint() ;

/// @brief Method set_MinPoint addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_MinPoint(::ArrayW<T,::Array<T>*>  value) ;

/// @brief Method get_MaxPoint addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> get_MaxPoint() ;

/// @brief Method set_MaxPoint addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_MaxPoint(::ArrayW<T,::Array<T>*>  value) ;

/// @brief Method Infinite addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T> Infinite(int32_t  dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*  math) ;

/// @brief Method GetClosestPoint addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> GetClosestPoint(::ArrayW<T,::Array<T>*>  toPoint, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*  math) ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T> Clone() ;

// Ctor Parameters [CppParam { name: "minPoint", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "maxPoint", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }]
constexpr HyperRect_1(::ArrayW<T,::Array<T>*>  minPoint, ::ArrayW<T,::Array<T>*>  maxPoint) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HyperRect_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HyperRect_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ProBuilder::KdTree::HyperRect_1, "UnityEngine.ProBuilder.KdTree", "HyperRect`1");
