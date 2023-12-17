#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataBasicInfo)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataBasicInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataBasicInfo);
// Type: ::BeatmapDataBasicInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4246))
// CS Name: ::BeatmapDataBasicInfo*
class CORDL_TYPE BeatmapDataBasicInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <numberOfLines>k__BackingField offset 0x10
 __declspec(property(get=__get__numberOfLines_k__BackingField, put=__set__numberOfLines_k__BackingField)) int32_t  _numberOfLines_k__BackingField;

/// @brief Field <cuttableNotesCount>k__BackingField offset 0x14
 __declspec(property(get=__get__cuttableNotesCount_k__BackingField, put=__set__cuttableNotesCount_k__BackingField)) int32_t  _cuttableNotesCount_k__BackingField;

/// @brief Field <obstaclesCount>k__BackingField offset 0x18
 __declspec(property(get=__get__obstaclesCount_k__BackingField, put=__set__obstaclesCount_k__BackingField)) int32_t  _obstaclesCount_k__BackingField;

/// @brief Field <bombsCount>k__BackingField offset 0x1c
 __declspec(property(get=__get__bombsCount_k__BackingField, put=__set__bombsCount_k__BackingField)) int32_t  _bombsCount_k__BackingField;

/// @brief Field <specialBasicBeatmapEventKeywords>k__BackingField offset 0x20
 __declspec(property(get=__get__specialBasicBeatmapEventKeywords_k__BackingField, put=__set__specialBasicBeatmapEventKeywords_k__BackingField)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  _specialBasicBeatmapEventKeywords_k__BackingField;

 __declspec(property(get=get_numberOfLines)) int32_t  numberOfLines;

 __declspec(property(get=get_cuttableNotesCount)) int32_t  cuttableNotesCount;

 __declspec(property(get=get_obstaclesCount)) int32_t  obstaclesCount;

 __declspec(property(get=get_bombsCount)) int32_t  bombsCount;

 __declspec(property(get=get_specialBasicBeatmapEventKeywords)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  specialBasicBeatmapEventKeywords;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapDataBasicInfo"
constexpr operator  ::GlobalNamespace::IBeatmapDataBasicInfo*() noexcept;

constexpr void __set__numberOfLines_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__numberOfLines_k__BackingField() ;

constexpr int32_t const& __get__numberOfLines_k__BackingField() const;

constexpr void __set__cuttableNotesCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__cuttableNotesCount_k__BackingField() ;

constexpr int32_t const& __get__cuttableNotesCount_k__BackingField() const;

constexpr void __set__obstaclesCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__obstaclesCount_k__BackingField() ;

constexpr int32_t const& __get__obstaclesCount_k__BackingField() const;

constexpr void __set__bombsCount_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__bombsCount_k__BackingField() ;

constexpr int32_t const& __get__bombsCount_k__BackingField() const;

constexpr void __set__specialBasicBeatmapEventKeywords_k__BackingField(::System::Collections::Generic::IEnumerable_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* __get__specialBasicBeatmapEventKeywords_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> __get__specialBasicBeatmapEventKeywords_k__BackingField() const;

/// @brief Method get_numberOfLines addr 0x232ec30 size 0x8 virtual true final true
inline int32_t get_numberOfLines() ;

/// @brief Method get_cuttableNotesCount addr 0x232ec38 size 0x8 virtual true final true
inline int32_t get_cuttableNotesCount() ;

/// @brief Method get_obstaclesCount addr 0x232ec40 size 0x8 virtual true final true
inline int32_t get_obstaclesCount() ;

/// @brief Method get_bombsCount addr 0x232ec48 size 0x8 virtual true final true
inline int32_t get_bombsCount() ;

/// @brief Method get_specialBasicBeatmapEventKeywords addr 0x232ec50 size 0x8 virtual true final true
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_specialBasicBeatmapEventKeywords() ;

static inline ::GlobalNamespace::BeatmapDataBasicInfo* New_ctor(int32_t  numberOfLines, int32_t  cuttableNotesCount, int32_t  obstaclesCount, int32_t  bombsCount, ::System::Collections::Generic::IEnumerable_1<::StringW>*  specialBasicBeatmapEventKeywords) ;

/// @brief Method .ctor addr 0x232ec58 size 0x50 virtual false final false
inline void _ctor(int32_t  numberOfLines, int32_t  cuttableNotesCount, int32_t  obstaclesCount, int32_t  bombsCount, ::System::Collections::Generic::IEnumerable_1<::StringW>*  specialBasicBeatmapEventKeywords) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataBasicInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataBasicInfo(BeatmapDataBasicInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataBasicInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataBasicInfo(BeatmapDataBasicInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataBasicInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataBasicInfo, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataBasicInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataBasicInfo*, "", "BeatmapDataBasicInfo");
