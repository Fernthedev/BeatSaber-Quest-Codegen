#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TMP_GlyphPairAdjustmentRecord)
namespace TMPro {
struct TMP_GlyphAdjustmentRecord;
}
namespace TMPro {
struct FontFeatureLookupFlags;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
// Forward declare root types
namespace TMPro {
class TMP_GlyphPairAdjustmentRecord;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_GlyphPairAdjustmentRecord);
// Type: TMPro::TMP_GlyphPairAdjustmentRecord
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12374))
// CS Name: ::TMPro::TMP_GlyphPairAdjustmentRecord*
class CORDL_TYPE TMP_GlyphPairAdjustmentRecord : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field m_FirstAdjustmentRecord offset 0x10
 __declspec(property(get=__get_m_FirstAdjustmentRecord, put=__set_m_FirstAdjustmentRecord)) ::TMPro::TMP_GlyphAdjustmentRecord  m_FirstAdjustmentRecord;

/// @brief Field m_SecondAdjustmentRecord offset 0x24
 __declspec(property(get=__get_m_SecondAdjustmentRecord, put=__set_m_SecondAdjustmentRecord)) ::TMPro::TMP_GlyphAdjustmentRecord  m_SecondAdjustmentRecord;

/// @brief Field m_FeatureLookupFlags offset 0x38
 __declspec(property(get=__get_m_FeatureLookupFlags, put=__set_m_FeatureLookupFlags)) ::TMPro::FontFeatureLookupFlags  m_FeatureLookupFlags;

 __declspec(property(get=get_firstAdjustmentRecord, put=set_firstAdjustmentRecord)) ::TMPro::TMP_GlyphAdjustmentRecord  firstAdjustmentRecord;

 __declspec(property(get=get_secondAdjustmentRecord, put=set_secondAdjustmentRecord)) ::TMPro::TMP_GlyphAdjustmentRecord  secondAdjustmentRecord;

 __declspec(property(get=get_featureLookupFlags, put=set_featureLookupFlags)) ::TMPro::FontFeatureLookupFlags  featureLookupFlags;

constexpr void __set_m_FirstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord  value) ;

constexpr ::TMPro::TMP_GlyphAdjustmentRecord& __get_m_FirstAdjustmentRecord() ;

constexpr ::TMPro::TMP_GlyphAdjustmentRecord const& __get_m_FirstAdjustmentRecord() const;

constexpr void __set_m_SecondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord  value) ;

constexpr ::TMPro::TMP_GlyphAdjustmentRecord& __get_m_SecondAdjustmentRecord() ;

constexpr ::TMPro::TMP_GlyphAdjustmentRecord const& __get_m_SecondAdjustmentRecord() const;

constexpr void __set_m_FeatureLookupFlags(::TMPro::FontFeatureLookupFlags  value) ;

constexpr ::TMPro::FontFeatureLookupFlags& __get_m_FeatureLookupFlags() ;

constexpr ::TMPro::FontFeatureLookupFlags const& __get_m_FeatureLookupFlags() const;

/// @brief Method get_firstAdjustmentRecord addr 0x2c12240 size 0x14 virtual false final false
inline ::TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord() ;

/// @brief Method set_firstAdjustmentRecord addr 0x2c12254 size 0x14 virtual false final false
inline void set_firstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord  value) ;

/// @brief Method get_secondAdjustmentRecord addr 0x2c12268 size 0x14 virtual false final false
inline ::TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord() ;

/// @brief Method set_secondAdjustmentRecord addr 0x2c1227c size 0x14 virtual false final false
inline void set_secondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord  value) ;

/// @brief Method get_featureLookupFlags addr 0x2c12290 size 0x8 virtual false final false
inline ::TMPro::FontFeatureLookupFlags get_featureLookupFlags() ;

/// @brief Method set_featureLookupFlags addr 0x2c12298 size 0x8 virtual false final false
inline void set_featureLookupFlags(::TMPro::FontFeatureLookupFlags  value) ;

static inline ::TMPro::TMP_GlyphPairAdjustmentRecord* New_ctor(::TMPro::TMP_GlyphAdjustmentRecord  firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord  secondAdjustmentRecord) ;

/// @brief Method .ctor addr 0x2c0fa30 size 0x48 virtual false final false
inline void _ctor(::TMPro::TMP_GlyphAdjustmentRecord  firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord  secondAdjustmentRecord) ;

static inline ::TMPro::TMP_GlyphPairAdjustmentRecord* New_ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  glyphPairAdjustmentRecord) ;

/// @brief Method .ctor addr 0x2c0ef20 size 0xb4 virtual false final false
inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord  glyphPairAdjustmentRecord) ;

// Ctor Parameters [CppParam { name: "", ty: "TMP_GlyphPairAdjustmentRecord", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_GlyphPairAdjustmentRecord(TMP_GlyphPairAdjustmentRecord && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_GlyphPairAdjustmentRecord", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_GlyphPairAdjustmentRecord(TMP_GlyphPairAdjustmentRecord const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TMP_GlyphPairAdjustmentRecord()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_GlyphPairAdjustmentRecord, 0x40>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::TMP_GlyphPairAdjustmentRecord);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphPairAdjustmentRecord*, "TMPro", "TMP_GlyphPairAdjustmentRecord");
