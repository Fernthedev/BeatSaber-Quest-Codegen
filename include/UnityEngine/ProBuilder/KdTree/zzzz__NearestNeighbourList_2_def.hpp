#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NearestNeighbourList_2)
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TDistance>
class INearestNeighbourList_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
class PriorityQueue_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TDistance>
class NearestNeighbourList_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TDistance>
class NearestNeighbourList_2<TItem,TDistance>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::il2cpp_utils::il2cpp_reference_type TItem>
class NearestNeighbourList_2<TItem,float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2);
// Type: UnityEngine.ProBuilder.KdTree::NearestNeighbourList`2
// Type: UnityEngine.ProBuilder.KdTree::NearestNeighbourList`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15922))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15922), inst: 1634 })
// CS Name: ::UnityEngine.ProBuilder.KdTree::NearestNeighbourList`2<TItem,TDistance>*
class CORDL_TYPE NearestNeighbourList_2<TItem,float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field queue offset 0x10
 __declspec(property(get=__get_queue, put=__set_queue)) ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*  queue;

/// @brief Field distanceMath offset 0x18
 __declspec(property(get=__get_distanceMath, put=__set_distanceMath)) ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  distanceMath;

/// @brief Field maxCapacity offset 0x20
 __declspec(property(get=__get_maxCapacity, put=__set_maxCapacity)) int32_t  maxCapacity;

 __declspec(property(get=get_MaxCapacity)) int32_t  MaxCapacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsCapacityReached)) bool  IsCapacityReached;

/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,float_t>"
constexpr operator  ::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,float_t>*() noexcept;

constexpr void __set_queue(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>* __get_queue() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*> __get_queue() const;

constexpr void __set_distanceMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>* __get_distanceMath() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*> __get_distanceMath() const;

constexpr void __set_maxCapacity(int32_t  value) ;

constexpr int32_t& __get_maxCapacity() ;

constexpr int32_t const& __get_maxCapacity() const;

static inline ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,float_t>* New_ctor(int32_t  maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  distanceMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  distanceMath) ;

/// @brief Method get_MaxCapacity addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_MaxCapacity() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(TItem  item, float_t  distance) ;

/// @brief Method GetFurtherest addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem GetFurtherest() ;

/// @brief Method GetFurtherestDistance addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t GetFurtherestDistance() ;

/// @brief Method RemoveFurtherest addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem RemoveFurtherest() ;

/// @brief Method get_IsCapacityReached addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCapacityReached() ;

// Ctor Parameters [CppParam { name: "", ty: "NearestNeighbourList_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NearestNeighbourList_2(NearestNeighbourList_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NearestNeighbourList_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NearestNeighbourList_2(NearestNeighbourList_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NearestNeighbourList_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::NearestNeighbourList`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TDistance>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15922)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15922), inst: 81 })
// CS Name: ::UnityEngine.ProBuilder.KdTree::NearestNeighbourList`2<TItem,TDistance>*
class CORDL_TYPE NearestNeighbourList_2<TItem,TDistance> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field queue offset 0x10
 __declspec(property(get=__get_queue, put=__set_queue)) ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance>*  queue;

/// @brief Field distanceMath offset 0x18
 __declspec(property(get=__get_distanceMath, put=__set_distanceMath)) ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*  distanceMath;

/// @brief Field maxCapacity offset 0x20
 __declspec(property(get=__get_maxCapacity, put=__set_maxCapacity)) int32_t  maxCapacity;

 __declspec(property(get=get_MaxCapacity)) int32_t  MaxCapacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsCapacityReached)) bool  IsCapacityReached;

/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>"
constexpr operator  ::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>*() noexcept;

constexpr void __set_queue(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance>* __get_queue() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance>*> __get_queue() const;

constexpr void __set_distanceMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* __get_distanceMath() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*> __get_distanceMath() const;

constexpr void __set_maxCapacity(int32_t  value) ;

constexpr int32_t& __get_maxCapacity() ;

constexpr int32_t const& __get_maxCapacity() const;

static inline ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem,TDistance>* New_ctor(int32_t  maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*  distanceMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*  distanceMath) ;

/// @brief Method get_MaxCapacity addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_MaxCapacity() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(TItem  item, TDistance  distance) ;

/// @brief Method GetFurtherest addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem GetFurtherest() ;

/// @brief Method GetFurtherestDistance addr 0x0 size 0xffffffffffffffff virtual false final false
inline TDistance GetFurtherestDistance() ;

/// @brief Method RemoveFurtherest addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem RemoveFurtherest() ;

/// @brief Method get_IsCapacityReached addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCapacityReached() ;

// Ctor Parameters [CppParam { name: "", ty: "NearestNeighbourList_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NearestNeighbourList_2(NearestNeighbourList_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NearestNeighbourList_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NearestNeighbourList_2(NearestNeighbourList_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NearestNeighbourList_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2, "UnityEngine.ProBuilder.KdTree", "NearestNeighbourList`2");
