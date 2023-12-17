#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockBeatmapData)
namespace GlobalNamespace {
class MockNoteData;
}
namespace GlobalNamespace {
class MockObstacleData;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapData);
// Type: ::MockBeatmapData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15509))
// CS Name: ::MockBeatmapData*
class CORDL_TYPE MockBeatmapData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <numberOfLines>k__BackingField offset 0x10
 __declspec(property(get=__get__numberOfLines_k__BackingField, put=__set__numberOfLines_k__BackingField)) int32_t  _numberOfLines_k__BackingField;

/// @brief Field <songEndTime>k__BackingField offset 0x14
 __declspec(property(get=__get__songEndTime_k__BackingField, put=__set__songEndTime_k__BackingField)) float_t  _songEndTime_k__BackingField;

/// @brief Field <leftNotes>k__BackingField offset 0x18
 __declspec(property(get=__get__leftNotes_k__BackingField, put=__set__leftNotes_k__BackingField)) ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  _leftNotes_k__BackingField;

/// @brief Field <rightNotes>k__BackingField offset 0x20
 __declspec(property(get=__get__rightNotes_k__BackingField, put=__set__rightNotes_k__BackingField)) ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  _rightNotes_k__BackingField;

/// @brief Field <bombNotes>k__BackingField offset 0x28
 __declspec(property(get=__get__bombNotes_k__BackingField, put=__set__bombNotes_k__BackingField)) ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  _bombNotes_k__BackingField;

/// @brief Field <obstacles>k__BackingField offset 0x30
 __declspec(property(get=__get__obstacles_k__BackingField, put=__set__obstacles_k__BackingField)) ::ArrayW<::GlobalNamespace::MockObstacleData*,::Array<::GlobalNamespace::MockObstacleData*>*>  _obstacles_k__BackingField;

 __declspec(property(get=get_numberOfLines, put=set_numberOfLines)) int32_t  numberOfLines;

 __declspec(property(get=get_songEndTime, put=set_songEndTime)) float_t  songEndTime;

 __declspec(property(get=get_leftNotes, put=set_leftNotes)) ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  leftNotes;

 __declspec(property(get=get_rightNotes, put=set_rightNotes)) ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  rightNotes;

 __declspec(property(get=get_bombNotes, put=set_bombNotes)) ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  bombNotes;

 __declspec(property(get=get_obstacles, put=set_obstacles)) ::ArrayW<::GlobalNamespace::MockObstacleData*,::Array<::GlobalNamespace::MockObstacleData*>*>  obstacles;

constexpr void __set__numberOfLines_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__numberOfLines_k__BackingField() ;

constexpr int32_t const& __get__numberOfLines_k__BackingField() const;

constexpr void __set__songEndTime_k__BackingField(float_t  value) ;

constexpr float_t& __get__songEndTime_k__BackingField() ;

constexpr float_t const& __get__songEndTime_k__BackingField() const;

constexpr void __set__leftNotes_k__BackingField(::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>& __get__leftNotes_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*> const& __get__leftNotes_k__BackingField() const;

constexpr void __set__rightNotes_k__BackingField(::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>& __get__rightNotes_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*> const& __get__rightNotes_k__BackingField() const;

constexpr void __set__bombNotes_k__BackingField(::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>& __get__bombNotes_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*> const& __get__bombNotes_k__BackingField() const;

constexpr void __set__obstacles_k__BackingField(::ArrayW<::GlobalNamespace::MockObstacleData*,::Array<::GlobalNamespace::MockObstacleData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*,::Array<::GlobalNamespace::MockObstacleData*>*>& __get__obstacles_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*,::Array<::GlobalNamespace::MockObstacleData*>*> const& __get__obstacles_k__BackingField() const;

/// @brief Method get_numberOfLines addr 0x23e6878 size 0x8 virtual false final false
inline int32_t get_numberOfLines() ;

/// @brief Method set_numberOfLines addr 0x23e6880 size 0x8 virtual false final false
inline void set_numberOfLines(int32_t  value) ;

/// @brief Method get_songEndTime addr 0x23e6888 size 0x8 virtual false final false
inline float_t get_songEndTime() ;

/// @brief Method set_songEndTime addr 0x23e6890 size 0x8 virtual false final false
inline void set_songEndTime(float_t  value) ;

/// @brief Method get_leftNotes addr 0x23e6898 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*> get_leftNotes() ;

/// @brief Method set_leftNotes addr 0x23e68a0 size 0x8 virtual false final false
inline void set_leftNotes(::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  value) ;

/// @brief Method get_rightNotes addr 0x23e68a8 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*> get_rightNotes() ;

/// @brief Method set_rightNotes addr 0x23e68b0 size 0x8 virtual false final false
inline void set_rightNotes(::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  value) ;

/// @brief Method get_bombNotes addr 0x23e68b8 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*> get_bombNotes() ;

/// @brief Method set_bombNotes addr 0x23e68c0 size 0x8 virtual false final false
inline void set_bombNotes(::ArrayW<::GlobalNamespace::MockNoteData*,::Array<::GlobalNamespace::MockNoteData*>*>  value) ;

/// @brief Method get_obstacles addr 0x23e68c8 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::MockObstacleData*,::Array<::GlobalNamespace::MockObstacleData*>*> get_obstacles() ;

/// @brief Method set_obstacles addr 0x23e68d0 size 0x8 virtual false final false
inline void set_obstacles(::ArrayW<::GlobalNamespace::MockObstacleData*,::Array<::GlobalNamespace::MockObstacleData*>*>  value) ;

static inline ::GlobalNamespace::MockBeatmapData* New_ctor() ;

/// @brief Method .ctor addr 0x23e68d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockBeatmapData(MockBeatmapData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockBeatmapData(MockBeatmapData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MockBeatmapData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapData, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapData*, "", "MockBeatmapData");
