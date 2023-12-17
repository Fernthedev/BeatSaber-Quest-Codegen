#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_CurveInfo)
namespace HoudiniEngineUnity {
struct HAPI_CurveType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CurveInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_CurveInfo);
// Type: HoudiniEngineUnity::HAPI_CurveInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9749))
// CS Name: ::HoudiniEngineUnity::HAPI_CurveInfo
struct CORDL_TYPE HAPI_CurveInfo : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field curveType offset 0x0
 __declspec(property(get=__get_curveType, put=__set_curveType)) ::HoudiniEngineUnity::HAPI_CurveType  curveType;

/// @brief Field curveCount offset 0x4
 __declspec(property(get=__get_curveCount, put=__set_curveCount)) int32_t  curveCount;

/// @brief Field vertexCount offset 0x8
 __declspec(property(get=__get_vertexCount, put=__set_vertexCount)) int32_t  vertexCount;

/// @brief Field knotCount offset 0xc
 __declspec(property(get=__get_knotCount, put=__set_knotCount)) int32_t  knotCount;

/// @brief Field isPeriodic offset 0x10
 __declspec(property(get=__get_isPeriodic, put=__set_isPeriodic)) bool  isPeriodic;

/// @brief Field isRational offset 0x11
 __declspec(property(get=__get_isRational, put=__set_isRational)) bool  isRational;

/// @brief Field order offset 0x14
 __declspec(property(get=__get_order, put=__set_order)) int32_t  order;

/// @brief Field hasKnots offset 0x18
 __declspec(property(get=__get_hasKnots, put=__set_hasKnots)) bool  hasKnots;

constexpr void __set_curveType(::HoudiniEngineUnity::HAPI_CurveType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_CurveType& __get_curveType() ;

constexpr ::HoudiniEngineUnity::HAPI_CurveType const& __get_curveType() const;

constexpr void __set_curveCount(int32_t  value) ;

constexpr int32_t& __get_curveCount() ;

constexpr int32_t const& __get_curveCount() const;

constexpr void __set_vertexCount(int32_t  value) ;

constexpr int32_t& __get_vertexCount() ;

constexpr int32_t const& __get_vertexCount() const;

constexpr void __set_knotCount(int32_t  value) ;

constexpr int32_t& __get_knotCount() ;

constexpr int32_t const& __get_knotCount() const;

constexpr void __set_isPeriodic(bool  value) ;

constexpr bool& __get_isPeriodic() ;

constexpr bool const& __get_isPeriodic() const;

constexpr void __set_isRational(bool  value) ;

constexpr bool& __get_isRational() ;

constexpr bool const& __get_isRational() const;

constexpr void __set_order(int32_t  value) ;

constexpr int32_t& __get_order() ;

constexpr int32_t const& __get_order() const;

constexpr void __set_hasKnots(bool  value) ;

constexpr bool& __get_hasKnots() ;

constexpr bool const& __get_hasKnots() const;

// Ctor Parameters [CppParam { name: "curveType", ty: "::HoudiniEngineUnity::HAPI_CurveType", modifiers: "", def_value: None }, CppParam { name: "curveCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "knotCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isPeriodic", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isRational", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasKnots", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_CurveInfo(::HoudiniEngineUnity::HAPI_CurveType  curveType, int32_t  curveCount, int32_t  vertexCount, int32_t  knotCount, bool  isPeriodic, bool  isRational, int32_t  order, bool  hasKnots) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_CurveInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_CurveInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_CurveInfo, 0x1c>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CurveInfo, "HoudiniEngineUnity", "HAPI_CurveInfo");
