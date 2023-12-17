#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_GlyphAdjustmentRecord)
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAdjustmentRecord;
}
namespace TMPro {
struct TMP_GlyphValueRecord;
}
// Forward declare root types
namespace TMPro {
struct TMP_GlyphAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_GlyphAdjustmentRecord);
// Type: TMPro::TMP_GlyphAdjustmentRecord
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12373))
// CS Name: ::TMPro::TMP_GlyphAdjustmentRecord
struct CORDL_TYPE TMP_GlyphAdjustmentRecord : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_GlyphIndex offset 0x0
 __declspec(property(get=__get_m_GlyphIndex, put=__set_m_GlyphIndex)) uint32_t  m_GlyphIndex;

/// @brief Field m_GlyphValueRecord offset 0x4
 __declspec(property(get=__get_m_GlyphValueRecord, put=__set_m_GlyphValueRecord)) ::TMPro::TMP_GlyphValueRecord  m_GlyphValueRecord;

 __declspec(property(get=get_glyphIndex, put=set_glyphIndex)) uint32_t  glyphIndex;

 __declspec(property(get=get_glyphValueRecord, put=set_glyphValueRecord)) ::TMPro::TMP_GlyphValueRecord  glyphValueRecord;

constexpr void __set_m_GlyphIndex(uint32_t  value) ;

constexpr uint32_t& __get_m_GlyphIndex() ;

constexpr uint32_t const& __get_m_GlyphIndex() const;

constexpr void __set_m_GlyphValueRecord(::TMPro::TMP_GlyphValueRecord  value) ;

constexpr ::TMPro::TMP_GlyphValueRecord& __get_m_GlyphValueRecord() ;

constexpr ::TMPro::TMP_GlyphValueRecord const& __get_m_GlyphValueRecord() const;

/// @brief Method get_glyphIndex addr 0x2c121c4 size 0x8 virtual false final false
inline uint32_t get_glyphIndex() ;

/// @brief Method set_glyphIndex addr 0x2c121cc size 0x8 virtual false final false
inline void set_glyphIndex(uint32_t  value) ;

/// @brief Method get_glyphValueRecord addr 0x2c121d4 size 0xc virtual false final false
inline ::TMPro::TMP_GlyphValueRecord get_glyphValueRecord() ;

/// @brief Method set_glyphValueRecord addr 0x2c121e0 size 0xc virtual false final false
inline void set_glyphValueRecord(::TMPro::TMP_GlyphValueRecord  value) ;

/// @brief Method .ctor addr 0x2c0fa20 size 0x10 virtual false final false
inline void _ctor(uint32_t  glyphIndex, ::TMPro::TMP_GlyphValueRecord  glyphValueRecord) ;

/// @brief Method .ctor addr 0x2c121ec size 0x54 virtual false final false
inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord  adjustmentRecord) ;

// Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_GlyphValueRecord", ty: "::TMPro::TMP_GlyphValueRecord", modifiers: "", def_value: None }]
constexpr TMP_GlyphAdjustmentRecord(uint32_t  m_GlyphIndex, ::TMPro::TMP_GlyphValueRecord  m_GlyphValueRecord) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_GlyphAdjustmentRecord(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_GlyphAdjustmentRecord()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_GlyphAdjustmentRecord, 0x14>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphAdjustmentRecord, "TMPro", "TMP_GlyphAdjustmentRecord");
