#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphAdjustmentRecord)
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord);
// Type: UnityEngine.TextCore.LowLevel::GlyphAdjustmentRecord
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15541))
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphAdjustmentRecord
struct CORDL_TYPE GlyphAdjustmentRecord : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_GlyphIndex offset 0x0
 __declspec(property(get=__get_m_GlyphIndex, put=__set_m_GlyphIndex)) uint32_t  m_GlyphIndex;

/// @brief Field m_GlyphValueRecord offset 0x4
 __declspec(property(get=__get_m_GlyphValueRecord, put=__set_m_GlyphValueRecord)) ::UnityEngine::TextCore::LowLevel::GlyphValueRecord  m_GlyphValueRecord;

 __declspec(property(get=get_glyphIndex)) uint32_t  glyphIndex;

 __declspec(property(get=get_glyphValueRecord)) ::UnityEngine::TextCore::LowLevel::GlyphValueRecord  glyphValueRecord;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>*() ;

constexpr void __set_m_GlyphIndex(uint32_t  value) ;

constexpr uint32_t& __get_m_GlyphIndex() ;

constexpr uint32_t const& __get_m_GlyphIndex() const;

constexpr void __set_m_GlyphValueRecord(::UnityEngine::TextCore::LowLevel::GlyphValueRecord  value) ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphValueRecord& __get_m_GlyphValueRecord() ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphValueRecord const& __get_m_GlyphValueRecord() const;

/// @brief Method get_glyphIndex addr 0x2d22a80 size 0x8 virtual false final false
inline uint32_t get_glyphIndex() ;

/// @brief Method get_glyphValueRecord addr 0x2d22a88 size 0xc virtual false final false
inline ::UnityEngine::TextCore::LowLevel::GlyphValueRecord get_glyphValueRecord() ;

/// @brief Method GetHashCode addr 0x2d22a94 size 0x6c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2d22b00 size 0x80 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2d22b80 size 0xa4 virtual true final true
inline bool Equals(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord  other) ;

// Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_GlyphValueRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphValueRecord", modifiers: "", def_value: None }]
constexpr GlyphAdjustmentRecord(uint32_t  m_GlyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord  m_GlyphValueRecord) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlyphAdjustmentRecord(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlyphAdjustmentRecord()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphAdjustmentRecord");
