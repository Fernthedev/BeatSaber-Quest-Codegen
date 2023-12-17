#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeMath_1)
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree::Math {
template<typename T>
class TypeMath_1;
}
namespace UnityEngine::ProBuilder::KdTree::Math {
template<::il2cpp_utils::il2cpp_reference_type T>
class TypeMath_1<T>;
}
namespace UnityEngine::ProBuilder::KdTree::Math {
template<>
class TypeMath_1<double_t>;
}
namespace UnityEngine::ProBuilder::KdTree::Math {
template<>
class TypeMath_1<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1);
// Type: UnityEngine.ProBuilder.KdTree.Math::TypeMath`1
// Type: UnityEngine.ProBuilder.KdTree.Math::TypeMath`1
namespace UnityEngine::ProBuilder::KdTree::Math {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15927)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15927), inst: 2704 })
// CS Name: ::UnityEngine.ProBuilder.KdTree.Math::TypeMath`1<T>*
class CORDL_TYPE TypeMath_1<double_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_MinValue)) double_t  MinValue;

 __declspec(property(get=get_MaxValue)) double_t  MaxValue;

 __declspec(property(get=get_Zero)) double_t  Zero;

 __declspec(property(get=get_NegativeInfinity)) double_t  NegativeInfinity;

 __declspec(property(get=get_PositiveInfinity)) double_t  PositiveInfinity;

/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<double_t>"
constexpr operator  ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<double_t>*() noexcept;

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(double_t  a, double_t  b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AreEqual(double_t  a, double_t  b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AreEqual(::ArrayW<double_t,::Array<double_t>*>  a, ::ArrayW<double_t,::Array<double_t>*>  b) ;

/// @brief Method get_MinValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t get_MinValue() ;

/// @brief Method get_MaxValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t get_MaxValue() ;

/// @brief Method Min addr 0x0 size 0xffffffffffffffff virtual true final true
inline double_t Min(double_t  a, double_t  b) ;

/// @brief Method Max addr 0x0 size 0xffffffffffffffff virtual true final true
inline double_t Max(double_t  a, double_t  b) ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t get_Zero() ;

/// @brief Method get_NegativeInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t get_NegativeInfinity() ;

/// @brief Method get_PositiveInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t get_PositiveInfinity() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t Add(double_t  a, double_t  b) ;

/// @brief Method Subtract addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t Subtract(double_t  a, double_t  b) ;

/// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t Multiply(double_t  a, double_t  b) ;

/// @brief Method DistanceSquaredBetweenPoints addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t DistanceSquaredBetweenPoints(::ArrayW<double_t,::Array<double_t>*>  a, ::ArrayW<double_t,::Array<double_t>*>  b) ;

static inline ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<double_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeMath_1(TypeMath_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeMath_1(TypeMath_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeMath_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree::Math
// Type: UnityEngine.ProBuilder.KdTree.Math::TypeMath`1
namespace UnityEngine::ProBuilder::KdTree::Math {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15927))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15927), inst: 391 })
// CS Name: ::UnityEngine.ProBuilder.KdTree.Math::TypeMath`1<T>*
class CORDL_TYPE TypeMath_1<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_MinValue)) float_t  MinValue;

 __declspec(property(get=get_MaxValue)) float_t  MaxValue;

 __declspec(property(get=get_Zero)) float_t  Zero;

 __declspec(property(get=get_NegativeInfinity)) float_t  NegativeInfinity;

 __declspec(property(get=get_PositiveInfinity)) float_t  PositiveInfinity;

/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>"
constexpr operator  ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*() noexcept;

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(float_t  a, float_t  b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AreEqual(float_t  a, float_t  b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AreEqual(::ArrayW<float_t,::Array<float_t>*>  a, ::ArrayW<float_t,::Array<float_t>*>  b) ;

/// @brief Method get_MinValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_MinValue() ;

/// @brief Method get_MaxValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_MaxValue() ;

/// @brief Method Min addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t Min(float_t  a, float_t  b) ;

/// @brief Method Max addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t Max(float_t  a, float_t  b) ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_Zero() ;

/// @brief Method get_NegativeInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_NegativeInfinity() ;

/// @brief Method get_PositiveInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_PositiveInfinity() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Add(float_t  a, float_t  b) ;

/// @brief Method Subtract addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Subtract(float_t  a, float_t  b) ;

/// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Multiply(float_t  a, float_t  b) ;

/// @brief Method DistanceSquaredBetweenPoints addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t DistanceSquaredBetweenPoints(::ArrayW<float_t,::Array<float_t>*>  a, ::ArrayW<float_t,::Array<float_t>*>  b) ;

static inline ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeMath_1(TypeMath_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeMath_1(TypeMath_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeMath_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree::Math
// Type: UnityEngine.ProBuilder.KdTree.Math::TypeMath`1
namespace UnityEngine::ProBuilder::KdTree::Math {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15927))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15927), inst: 2 })
// CS Name: ::UnityEngine.ProBuilder.KdTree.Math::TypeMath`1<T>*
class CORDL_TYPE TypeMath_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_MinValue)) T  MinValue;

 __declspec(property(get=get_MaxValue)) T  MaxValue;

 __declspec(property(get=get_Zero)) T  Zero;

 __declspec(property(get=get_NegativeInfinity)) T  NegativeInfinity;

 __declspec(property(get=get_PositiveInfinity)) T  PositiveInfinity;

/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>"
constexpr operator  ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*() noexcept;

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(T  a, T  b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AreEqual(T  a, T  b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AreEqual(::ArrayW<T,::Array<T>*>  a, ::ArrayW<T,::Array<T>*>  b) ;

/// @brief Method get_MinValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline T get_MinValue() ;

/// @brief Method get_MaxValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline T get_MaxValue() ;

/// @brief Method Min addr 0x0 size 0xffffffffffffffff virtual true final true
inline T Min(T  a, T  b) ;

/// @brief Method Max addr 0x0 size 0xffffffffffffffff virtual true final true
inline T Max(T  a, T  b) ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual true final false
inline T get_Zero() ;

/// @brief Method get_NegativeInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
inline T get_NegativeInfinity() ;

/// @brief Method get_PositiveInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
inline T get_PositiveInfinity() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
inline T Add(T  a, T  b) ;

/// @brief Method Subtract addr 0x0 size 0xffffffffffffffff virtual true final false
inline T Subtract(T  a, T  b) ;

/// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
inline T Multiply(T  a, T  b) ;

/// @brief Method DistanceSquaredBetweenPoints addr 0x0 size 0xffffffffffffffff virtual true final false
inline T DistanceSquaredBetweenPoints(::ArrayW<T,::Array<T>*>  a, ::ArrayW<T,::Array<T>*>  b) ;

static inline ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeMath_1(TypeMath_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeMath_1(TypeMath_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeMath_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree::Math
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1, "UnityEngine.ProBuilder.KdTree.Math", "TypeMath`1");
