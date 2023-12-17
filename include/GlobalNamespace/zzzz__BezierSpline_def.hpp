#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierSpline)
namespace GlobalNamespace {
class __BezierSpline____c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct BezierCurve;
}
namespace GlobalNamespace {
struct __BezierSpline__ComputeControlPointsResults;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BezierSpline;
}
namespace GlobalNamespace {
class __BezierSpline____c;
}
namespace GlobalNamespace {
struct __BezierSpline__ComputeControlPointsResults;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BezierSpline);
MARK_REF_PTR_T(::GlobalNamespace::__BezierSpline____c);
MARK_VAL_T(::GlobalNamespace::__BezierSpline__ComputeControlPointsResults);
// Type: ::ComputeControlPointsResults
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3993))
// CS Name: ::BezierSpline::ComputeControlPointsResults
struct CORDL_TYPE __BezierSpline__ComputeControlPointsResults : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field p1 offset 0x0
 __declspec(property(get=__get_p1, put=__set_p1)) ::ArrayW<float_t,::Array<float_t>*>  p1;

/// @brief Field p2 offset 0x8
 __declspec(property(get=__get_p2, put=__set_p2)) ::ArrayW<float_t,::Array<float_t>*>  p2;

constexpr void __set_p1(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_p1() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_p1() const;

constexpr void __set_p2(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_p2() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_p2() const;

/// @brief Method .ctor addr 0x221e4a4 size 0x8 virtual false final false
inline void _ctor(::ArrayW<float_t,::Array<float_t>*>  p1, ::ArrayW<float_t,::Array<float_t>*>  p2) ;

// Ctor Parameters [CppParam { name: "p1", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "p2", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }]
constexpr __BezierSpline__ComputeControlPointsResults(::ArrayW<float_t,::Array<float_t>*>  p1, ::ArrayW<float_t,::Array<float_t>*>  p2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BezierSpline__ComputeControlPointsResults(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BezierSpline__ComputeControlPointsResults()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BezierSpline__ComputeControlPointsResults, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3994))
// CS Name: ::BezierSpline::<>c*
class CORDL_TYPE __BezierSpline____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__BezierSpline____c*  value) ;

static inline ::GlobalNamespace::__BezierSpline____c* getStaticF___9() ;

static inline void setStaticF___9__6_0(::System::Comparison_1<::UnityEngine::Vector3>*  value) ;

static inline ::System::Comparison_1<::UnityEngine::Vector3>* getStaticF___9__6_0() ;

static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::Vector3,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::Vector3,float_t>* getStaticF___9__8_0() ;

static inline void setStaticF___9__8_1(::System::Func_2<::UnityEngine::Vector3,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::Vector3,float_t>* getStaticF___9__8_1() ;

static inline void setStaticF___9__8_2(::System::Func_2<::UnityEngine::Vector3,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::Vector3,float_t>* getStaticF___9__8_2() ;

static inline ::GlobalNamespace::__BezierSpline____c* New_ctor() ;

/// @brief Method .ctor addr 0x221e510 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SortSourceData>b__6_0 addr 0x221e518 size 0x30 virtual false final false
inline int32_t _SortSourceData_b__6_0(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2) ;

/// @brief Method <ComputeControlPoints>b__8_0 addr 0x221e548 size 0x4 virtual false final false
inline float_t _ComputeControlPoints_b__8_0(::UnityEngine::Vector3  p) ;

/// @brief Method <ComputeControlPoints>b__8_1 addr 0x221e54c size 0x8 virtual false final false
inline float_t _ComputeControlPoints_b__8_1(::UnityEngine::Vector3  p) ;

/// @brief Method <ComputeControlPoints>b__8_2 addr 0x221e554 size 0x8 virtual false final false
inline float_t _ComputeControlPoints_b__8_2(::UnityEngine::Vector3  p) ;

// Ctor Parameters [CppParam { name: "", ty: "__BezierSpline____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BezierSpline____c(__BezierSpline____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BezierSpline____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BezierSpline____c(__BezierSpline____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BezierSpline____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__6_0

// Static field <>9__8_0

// Static field <>9__8_1

// Static field <>9__8_2


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BezierSpline____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BezierSpline
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3995))
// CS Name: ::BezierSpline*
class CORDL_TYPE BezierSpline : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__BezierSpline____c;

using ComputeControlPointsResults = ::GlobalNamespace::__BezierSpline__ComputeControlPointsResults;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _segments offset 0x10
 __declspec(property(get=__get__segments, put=__set__segments)) ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*  _segments;

/// @brief Field _sourceDataPoints offset 0x18
 __declspec(property(get=__get__sourceDataPoints, put=__set__sourceDataPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _sourceDataPoints;

 __declspec(property(get=get_segments)) ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*  segments;

constexpr void __set__segments(::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* __get__segments() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*> __get__segments() const;

constexpr void __set__sourceDataPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* __get__sourceDataPoints() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> __get__sourceDataPoints() const;

/// @brief Method get_segments addr 0x221de14 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* get_segments() ;

/// @brief Method AddPoint addr 0x2218dc4 size 0xd8 virtual false final false
inline void AddPoint(float_t  distance, ::UnityEngine::Vector2  point) ;

/// @brief Method SortSourceData addr 0x221de1c size 0x100 virtual false final false
inline void SortSourceData() ;

/// @brief Method AddArtificialStartAndFinishPoint addr 0x2218e9c size 0x1f8 virtual false final false
inline void AddArtificialStartAndFinishPoint() ;

/// @brief Method ComputeControlPoints addr 0x2219094 size 0x55c virtual false final false
inline void ComputeControlPoints() ;

/// @brief Method Clear addr 0x221e434 size 0x70 virtual false final false
inline void Clear() ;

/// @brief Method ComputeControlPoints addr 0x221df1c size 0x518 virtual false final false
inline ::GlobalNamespace::__BezierSpline__ComputeControlPointsResults ComputeControlPoints(::System::Collections::Generic::List_1<float_t>*  k) ;

static inline ::GlobalNamespace::BezierSpline* New_ctor() ;

/// @brief Method .ctor addr 0x2218a14 size 0xc0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BezierSpline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BezierSpline(BezierSpline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BezierSpline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BezierSpline(BezierSpline const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BezierSpline()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierSpline, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BezierSpline);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierSpline*, "", "BezierSpline");
NEED_NO_BOX(::GlobalNamespace::__BezierSpline____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BezierSpline____c*, "", "BezierSpline/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BezierSpline__ComputeControlPointsResults, "", "BezierSpline/ComputeControlPointsResults");
