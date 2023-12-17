#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphPairAdjustmentRecord)
namespace UnityEngine::TextCore::LowLevel {
struct FontFeatureLookupFlags;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAdjustmentRecord;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord);
// Type: UnityEngine.TextCore.LowLevel::GlyphPairAdjustmentRecord
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15542))
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphPairAdjustmentRecord
struct CORDL_TYPE GlyphPairAdjustmentRecord : public ::bs_hook::ValueTypeWrapper<0x2c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field m_FirstAdjustmentRecord offset 0x0
 __declspec(property(get=__get_m_FirstAdjustmentRecord, put=__set_m_FirstAdjustmentRecord)) ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord  m_FirstAdjustmentRecord;

/// @brief Field m_SecondAdjustmentRecord offset 0x14
 __declspec(property(get=__get_m_SecondAdjustmentRecord, put=__set_m_SecondAdjustmentRecord)) ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord  m_SecondAdjustmentRecord;

/// @brief Field m_FeatureLookupFlags offset 0x28
 __declspec(property(get=__get_m_FeatureLookupFlags, put=__set_m_FeatureLookupFlags)) ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags  m_FeatureLookupFlags;

 __declspec(property(get=get_firstAdjustmentRecord)) ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord  firstAdjustmentRecord;

 __declspec(property(get=get_secondAdjustmentRecord)) ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord  secondAdjustmentRecord;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*() ;

constexpr void __set_m_FirstAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord  value) ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord& __get_m_FirstAdjustmentRecord() ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord const& __get_m_FirstAdjustmentRecord() const;

constexpr void __set_m_SecondAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord  value) ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord& __get_m_SecondAdjustmentRecord() ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord const& __get_m_SecondAdjustmentRecord() const;

constexpr void __set_m_FeatureLookupFlags(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags  value) ;

constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags& __get_m_FeatureLookupFlags() ;

constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags const& __get_m_FeatureLookupFlags() const;

/// @brief Method get_firstAdjustmentRecord addr 0x2d22c24 size 0x14 virtual false final false
inline ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_firstAdjustmentRecord() ;

/// @brief Method get_secondAdjustmentRecord addr 0x2d22c38 size 0x14 virtual false final false
inline ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_secondAdjustmentRecord() ;

/// @brief Method GetHashCode addr 0x2d22c4c size 0x6c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2d22cb8 size 0x80 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2d22d38 size 0xa4 virtual true final true
inline bool Equals(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  other) ;

// Ctor Parameters [CppParam { name: "m_FirstAdjustmentRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord", modifiers: "", def_value: None }, CppParam { name: "m_SecondAdjustmentRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord", modifiers: "", def_value: None }, CppParam { name: "m_FeatureLookupFlags", ty: "::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags", modifiers: "", def_value: None }]
constexpr GlyphPairAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord  m_FirstAdjustmentRecord, ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord  m_SecondAdjustmentRecord, ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags  m_FeatureLookupFlags) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlyphPairAdjustmentRecord(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlyphPairAdjustmentRecord()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, 0x2c>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphPairAdjustmentRecord");
