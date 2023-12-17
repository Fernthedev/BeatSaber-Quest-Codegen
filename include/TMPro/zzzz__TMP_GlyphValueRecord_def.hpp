#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TMP_GlyphValueRecord)
namespace TMPro {
struct GlyphValueRecord_Legacy;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Forward declare root types
namespace TMPro {
struct TMP_GlyphValueRecord;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_GlyphValueRecord);
// Type: TMPro::TMP_GlyphValueRecord
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12372))
// CS Name: ::TMPro::TMP_GlyphValueRecord
struct CORDL_TYPE TMP_GlyphValueRecord : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_XPlacement offset 0x0
 __declspec(property(get=__get_m_XPlacement, put=__set_m_XPlacement)) float_t  m_XPlacement;

/// @brief Field m_YPlacement offset 0x4
 __declspec(property(get=__get_m_YPlacement, put=__set_m_YPlacement)) float_t  m_YPlacement;

/// @brief Field m_XAdvance offset 0x8
 __declspec(property(get=__get_m_XAdvance, put=__set_m_XAdvance)) float_t  m_XAdvance;

/// @brief Field m_YAdvance offset 0xc
 __declspec(property(get=__get_m_YAdvance, put=__set_m_YAdvance)) float_t  m_YAdvance;

 __declspec(property(get=get_xPlacement, put=set_xPlacement)) float_t  xPlacement;

 __declspec(property(get=get_yPlacement, put=set_yPlacement)) float_t  yPlacement;

 __declspec(property(get=get_xAdvance, put=set_xAdvance)) float_t  xAdvance;

 __declspec(property(get=get_yAdvance, put=set_yAdvance)) float_t  yAdvance;

constexpr void __set_m_XPlacement(float_t  value) ;

constexpr float_t& __get_m_XPlacement() ;

constexpr float_t const& __get_m_XPlacement() const;

constexpr void __set_m_YPlacement(float_t  value) ;

constexpr float_t& __get_m_YPlacement() ;

constexpr float_t const& __get_m_YPlacement() const;

constexpr void __set_m_XAdvance(float_t  value) ;

constexpr float_t& __get_m_XAdvance() ;

constexpr float_t const& __get_m_XAdvance() const;

constexpr void __set_m_YAdvance(float_t  value) ;

constexpr float_t& __get_m_YAdvance() ;

constexpr float_t const& __get_m_YAdvance() const;

/// @brief Method get_xPlacement addr 0x2c12104 size 0x8 virtual false final false
inline float_t get_xPlacement() ;

/// @brief Method set_xPlacement addr 0x2c1210c size 0x8 virtual false final false
inline void set_xPlacement(float_t  value) ;

/// @brief Method get_yPlacement addr 0x2c12114 size 0x8 virtual false final false
inline float_t get_yPlacement() ;

/// @brief Method set_yPlacement addr 0x2c1211c size 0x8 virtual false final false
inline void set_yPlacement(float_t  value) ;

/// @brief Method get_xAdvance addr 0x2c12124 size 0x8 virtual false final false
inline float_t get_xAdvance() ;

/// @brief Method set_xAdvance addr 0x2c1212c size 0x8 virtual false final false
inline void set_xAdvance(float_t  value) ;

/// @brief Method get_yAdvance addr 0x2c12134 size 0x8 virtual false final false
inline float_t get_yAdvance() ;

/// @brief Method set_yAdvance addr 0x2c1213c size 0x8 virtual false final false
inline void set_yAdvance(float_t  value) ;

/// @brief Method .ctor addr 0x2c0fa14 size 0xc virtual false final false
inline void _ctor(float_t  xPlacement, float_t  yPlacement, float_t  xAdvance, float_t  yAdvance) ;

/// @brief Method .ctor addr 0x2c12144 size 0xc virtual false final false
inline void _ctor(::TMPro::GlyphValueRecord_Legacy  valueRecord) ;

/// @brief Method .ctor addr 0x2c12150 size 0x60 virtual false final false
inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord  valueRecord) ;

/// @brief Method op_Addition addr 0x2c121b0 size 0x14 virtual false final false
static inline ::TMPro::TMP_GlyphValueRecord op_Addition(::TMPro::TMP_GlyphValueRecord  a, ::TMPro::TMP_GlyphValueRecord  b) ;

// Ctor Parameters [CppParam { name: "m_XPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_XAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YAdvance", ty: "float_t", modifiers: "", def_value: None }]
constexpr TMP_GlyphValueRecord(float_t  m_XPlacement, float_t  m_YPlacement, float_t  m_XAdvance, float_t  m_YAdvance) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_GlyphValueRecord(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_GlyphValueRecord()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_GlyphValueRecord, 0x10>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphValueRecord, "TMPro", "TMP_GlyphValueRecord");
