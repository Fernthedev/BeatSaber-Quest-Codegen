#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphValueRecord)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphValueRecord);
// Type: UnityEngine.TextCore.LowLevel::GlyphValueRecord
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15540))
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphValueRecord
struct CORDL_TYPE GlyphValueRecord : public ::bs_hook::ValueTypeWrapper<0x10> {
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

 __declspec(property(get=get_xPlacement)) float_t  xPlacement;

 __declspec(property(get=get_yPlacement)) float_t  yPlacement;

 __declspec(property(get=get_xAdvance)) float_t  xAdvance;

 __declspec(property(get=get_yAdvance)) float_t  yAdvance;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>*() ;

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

/// @brief Method get_xPlacement addr 0x2d228c8 size 0x8 virtual false final false
inline float_t get_xPlacement() ;

/// @brief Method get_yPlacement addr 0x2d228d0 size 0x8 virtual false final false
inline float_t get_yPlacement() ;

/// @brief Method get_xAdvance addr 0x2d228d8 size 0x8 virtual false final false
inline float_t get_xAdvance() ;

/// @brief Method get_yAdvance addr 0x2d228e0 size 0x8 virtual false final false
inline float_t get_yAdvance() ;

/// @brief Method op_Addition addr 0x2d228e8 size 0x14 virtual false final false
static inline ::UnityEngine::TextCore::LowLevel::GlyphValueRecord op_Addition(::UnityEngine::TextCore::LowLevel::GlyphValueRecord  a, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord  b) ;

/// @brief Method GetHashCode addr 0x2d228fc size 0x64 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2d22960 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2d229d8 size 0xa8 virtual true final true
inline bool Equals(::UnityEngine::TextCore::LowLevel::GlyphValueRecord  other) ;

// Ctor Parameters [CppParam { name: "m_XPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_XAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YAdvance", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlyphValueRecord(float_t  m_XPlacement, float_t  m_YPlacement, float_t  m_XAdvance, float_t  m_YAdvance) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlyphValueRecord(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlyphValueRecord()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphValueRecord, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphValueRecord, "UnityEngine.TextCore.LowLevel", "GlyphValueRecord");
