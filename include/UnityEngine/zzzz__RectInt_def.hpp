#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RectInt)
namespace System {
class IFormattable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace UnityEngine {
struct RectInt;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RectInt);
// Type: UnityEngine::RectInt
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10162))
// CS Name: ::UnityEngine::RectInt
struct CORDL_TYPE RectInt : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_XMin offset 0x0
 __declspec(property(get=__get_m_XMin, put=__set_m_XMin)) int32_t  m_XMin;

/// @brief Field m_YMin offset 0x4
 __declspec(property(get=__get_m_YMin, put=__set_m_YMin)) int32_t  m_YMin;

/// @brief Field m_Width offset 0x8
 __declspec(property(get=__get_m_Width, put=__set_m_Width)) int32_t  m_Width;

/// @brief Field m_Height offset 0xc
 __declspec(property(get=__get_m_Height, put=__set_m_Height)) int32_t  m_Height;

 __declspec(property(get=get_x, put=set_x)) int32_t  x;

 __declspec(property(get=get_y, put=set_y)) int32_t  y;

 __declspec(property(get=get_width, put=set_width)) int32_t  width;

 __declspec(property(get=get_height, put=set_height)) int32_t  height;

 __declspec(property(get=get_xMin)) int32_t  xMin;

 __declspec(property(get=get_yMin)) int32_t  yMin;

 __declspec(property(get=get_xMax)) int32_t  xMax;

 __declspec(property(get=get_yMax)) int32_t  yMax;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::RectInt>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::RectInt>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

constexpr void __set_m_XMin(int32_t  value) ;

constexpr int32_t& __get_m_XMin() ;

constexpr int32_t const& __get_m_XMin() const;

constexpr void __set_m_YMin(int32_t  value) ;

constexpr int32_t& __get_m_YMin() ;

constexpr int32_t const& __get_m_YMin() const;

constexpr void __set_m_Width(int32_t  value) ;

constexpr int32_t& __get_m_Width() ;

constexpr int32_t const& __get_m_Width() const;

constexpr void __set_m_Height(int32_t  value) ;

constexpr int32_t& __get_m_Height() ;

constexpr int32_t const& __get_m_Height() const;

/// @brief Method get_x addr 0x2cc91d8 size 0x8 virtual false final false
inline int32_t get_x() ;

/// @brief Method set_x addr 0x2cc91e0 size 0x8 virtual false final false
inline void set_x(int32_t  value) ;

/// @brief Method get_y addr 0x2cc91e8 size 0x8 virtual false final false
inline int32_t get_y() ;

/// @brief Method set_y addr 0x2cc91f0 size 0x8 virtual false final false
inline void set_y(int32_t  value) ;

/// @brief Method get_width addr 0x2cc91f8 size 0x8 virtual false final false
inline int32_t get_width() ;

/// @brief Method set_width addr 0x2cc9200 size 0x8 virtual false final false
inline void set_width(int32_t  value) ;

/// @brief Method get_height addr 0x2cc9208 size 0x8 virtual false final false
inline int32_t get_height() ;

/// @brief Method set_height addr 0x2cc9210 size 0x8 virtual false final false
inline void set_height(int32_t  value) ;

/// @brief Method get_xMin addr 0x2cc9218 size 0x64 virtual false final false
inline int32_t get_xMin() ;

/// @brief Method get_yMin addr 0x2cc927c size 0x64 virtual false final false
inline int32_t get_yMin() ;

/// @brief Method get_xMax addr 0x2cc92e0 size 0x64 virtual false final false
inline int32_t get_xMax() ;

/// @brief Method get_yMax addr 0x2cc9344 size 0x64 virtual false final false
inline int32_t get_yMax() ;

/// @brief Method .ctor addr 0x2cc93a8 size 0xc virtual false final false
inline void _ctor(int32_t  xMin, int32_t  yMin, int32_t  width, int32_t  height) ;

/// @brief Method Overlaps addr 0x2cc93b4 size 0x9c virtual false final false
inline bool Overlaps(::UnityEngine::RectInt  other) ;

/// @brief Method ToString addr 0x2cc9450 size 0xc virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x2cc945c size 0x20c virtual true final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method Equals addr 0x2cc9668 size 0x44 virtual true final true
inline bool Equals(::UnityEngine::RectInt  other) ;

// Ctor Parameters [CppParam { name: "m_XMin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_YMin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RectInt(int32_t  m_XMin, int32_t  m_YMin, int32_t  m_Width, int32_t  m_Height) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RectInt(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RectInt()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RectInt, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectInt, "UnityEngine", "RectInt");
