#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockNoteData)
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class MockNoteData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockNoteData);
// Type: ::MockNoteData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15511))
// CS Name: ::MockNoteData*
class CORDL_TYPE MockNoteData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <time>k__BackingField offset 0x10
 __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField)) float_t  _time_k__BackingField;

/// @brief Field <lineIndex>k__BackingField offset 0x14
 __declspec(property(get=__get__lineIndex_k__BackingField, put=__set__lineIndex_k__BackingField)) int32_t  _lineIndex_k__BackingField;

/// @brief Field <gameplayType>k__BackingField offset 0x18
 __declspec(property(get=__get__gameplayType_k__BackingField, put=__set__gameplayType_k__BackingField)) ::GlobalNamespace::__NoteData__GameplayType  _gameplayType_k__BackingField;

/// @brief Field <colorType>k__BackingField offset 0x1c
 __declspec(property(get=__get__colorType_k__BackingField, put=__set__colorType_k__BackingField)) ::GlobalNamespace::ColorType  _colorType_k__BackingField;

/// @brief Field <cutDirection>k__BackingField offset 0x20
 __declspec(property(get=__get__cutDirection_k__BackingField, put=__set__cutDirection_k__BackingField)) ::GlobalNamespace::NoteCutDirection  _cutDirection_k__BackingField;

/// @brief Field <noteLineLayer>k__BackingField offset 0x24
 __declspec(property(get=__get__noteLineLayer_k__BackingField, put=__set__noteLineLayer_k__BackingField)) ::GlobalNamespace::NoteLineLayer  _noteLineLayer_k__BackingField;

/// @brief Field <duration>k__BackingField offset 0x28
 __declspec(property(get=__get__duration_k__BackingField, put=__set__duration_k__BackingField)) float_t  _duration_k__BackingField;

 __declspec(property(get=get_time, put=set_time)) float_t  time;

 __declspec(property(get=get_lineIndex, put=set_lineIndex)) int32_t  lineIndex;

 __declspec(property(get=get_gameplayType, put=set_gameplayType)) ::GlobalNamespace::__NoteData__GameplayType  gameplayType;

 __declspec(property(get=get_colorType, put=set_colorType)) ::GlobalNamespace::ColorType  colorType;

 __declspec(property(get=get_cutDirection, put=set_cutDirection)) ::GlobalNamespace::NoteCutDirection  cutDirection;

 __declspec(property(get=get_noteLineLayer, put=set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer  noteLineLayer;

 __declspec(property(get=get_duration, put=set_duration)) float_t  duration;

constexpr void __set__time_k__BackingField(float_t  value) ;

constexpr float_t& __get__time_k__BackingField() ;

constexpr float_t const& __get__time_k__BackingField() const;

constexpr void __set__lineIndex_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__lineIndex_k__BackingField() ;

constexpr int32_t const& __get__lineIndex_k__BackingField() const;

constexpr void __set__gameplayType_k__BackingField(::GlobalNamespace::__NoteData__GameplayType  value) ;

constexpr ::GlobalNamespace::__NoteData__GameplayType& __get__gameplayType_k__BackingField() ;

constexpr ::GlobalNamespace::__NoteData__GameplayType const& __get__gameplayType_k__BackingField() const;

constexpr void __set__colorType_k__BackingField(::GlobalNamespace::ColorType  value) ;

constexpr ::GlobalNamespace::ColorType& __get__colorType_k__BackingField() ;

constexpr ::GlobalNamespace::ColorType const& __get__colorType_k__BackingField() const;

constexpr void __set__cutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection  value) ;

constexpr ::GlobalNamespace::NoteCutDirection& __get__cutDirection_k__BackingField() ;

constexpr ::GlobalNamespace::NoteCutDirection const& __get__cutDirection_k__BackingField() const;

constexpr void __set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer  value) ;

constexpr ::GlobalNamespace::NoteLineLayer& __get__noteLineLayer_k__BackingField() ;

constexpr ::GlobalNamespace::NoteLineLayer const& __get__noteLineLayer_k__BackingField() const;

constexpr void __set__duration_k__BackingField(float_t  value) ;

constexpr float_t& __get__duration_k__BackingField() ;

constexpr float_t const& __get__duration_k__BackingField() const;

/// @brief Method get_time addr 0x23e6d58 size 0x8 virtual false final false
inline float_t get_time() ;

/// @brief Method set_time addr 0x23e6d60 size 0x8 virtual false final false
inline void set_time(float_t  value) ;

/// @brief Method get_lineIndex addr 0x23e6d68 size 0x8 virtual false final false
inline int32_t get_lineIndex() ;

/// @brief Method set_lineIndex addr 0x23e6d70 size 0x8 virtual false final false
inline void set_lineIndex(int32_t  value) ;

/// @brief Method get_gameplayType addr 0x23e6d78 size 0x8 virtual false final false
inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType() ;

/// @brief Method set_gameplayType addr 0x23e6d80 size 0x8 virtual false final false
inline void set_gameplayType(::GlobalNamespace::__NoteData__GameplayType  value) ;

/// @brief Method get_colorType addr 0x23e6d88 size 0x8 virtual false final false
inline ::GlobalNamespace::ColorType get_colorType() ;

/// @brief Method set_colorType addr 0x23e6d90 size 0x8 virtual false final false
inline void set_colorType(::GlobalNamespace::ColorType  value) ;

/// @brief Method get_cutDirection addr 0x23e6d98 size 0x8 virtual false final false
inline ::GlobalNamespace::NoteCutDirection get_cutDirection() ;

/// @brief Method set_cutDirection addr 0x23e6da0 size 0x8 virtual false final false
inline void set_cutDirection(::GlobalNamespace::NoteCutDirection  value) ;

/// @brief Method get_noteLineLayer addr 0x23e6da8 size 0x8 virtual false final false
inline ::GlobalNamespace::NoteLineLayer get_noteLineLayer() ;

/// @brief Method set_noteLineLayer addr 0x23e6db0 size 0x8 virtual false final false
inline void set_noteLineLayer(::GlobalNamespace::NoteLineLayer  value) ;

/// @brief Method get_duration addr 0x23e6db8 size 0x8 virtual false final false
inline float_t get_duration() ;

/// @brief Method set_duration addr 0x23e6dc0 size 0x8 virtual false final false
inline void set_duration(float_t  value) ;

/// @brief Method Mirror addr 0x23e6dc8 size 0x58 virtual true final false
inline void Mirror(int32_t  lineCount) ;

static inline ::GlobalNamespace::MockNoteData* New_ctor() ;

/// @brief Method .ctor addr 0x23e6e20 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MockNoteData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockNoteData(MockNoteData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockNoteData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockNoteData(MockNoteData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MockNoteData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockNoteData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockNoteData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockNoteData*, "", "MockNoteData");
