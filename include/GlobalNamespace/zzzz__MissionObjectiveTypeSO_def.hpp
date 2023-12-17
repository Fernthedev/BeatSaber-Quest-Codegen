#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionObjectiveTypeSO)
namespace GlobalNamespace {
class ObjectiveValueFormatterSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveTypeSO);
// Type: ::MissionObjectiveTypeSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4463))
// CS Name: ::MissionObjectiveTypeSO*
class CORDL_TYPE MissionObjectiveTypeSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _objectiveName offset 0x18
 __declspec(property(get=__get__objectiveName, put=__set__objectiveName)) ::StringW  _objectiveName;

/// @brief Field _noConditionValue offset 0x20
 __declspec(property(get=__get__noConditionValue, put=__set__noConditionValue)) bool  _noConditionValue;

/// @brief Field _objectiveValueFormater offset 0x28
 __declspec(property(get=__get__objectiveValueFormater, put=__set__objectiveValueFormater)) ::GlobalNamespace::ObjectiveValueFormatterSO*  _objectiveValueFormater;

 __declspec(property(get=get_objectiveName)) ::StringW  objectiveName;

 __declspec(property(get=get_objectiveNameLocalized)) ::StringW  objectiveNameLocalized;

 __declspec(property(get=get_noConditionValue)) bool  noConditionValue;

 __declspec(property(get=get_objectiveValueFormater)) ::GlobalNamespace::ObjectiveValueFormatterSO*  objectiveValueFormater;

constexpr void __set__objectiveName(::StringW  value) ;

constexpr ::StringW& __get__objectiveName() ;

constexpr ::StringW const& __get__objectiveName() const;

constexpr void __set__noConditionValue(bool  value) ;

constexpr bool& __get__noConditionValue() ;

constexpr bool const& __get__noConditionValue() const;

constexpr void __set__objectiveValueFormater(::GlobalNamespace::ObjectiveValueFormatterSO*  value) ;

constexpr ::GlobalNamespace::ObjectiveValueFormatterSO* __get__objectiveValueFormater() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObjectiveValueFormatterSO*> __get__objectiveValueFormater() const;

/// @brief Method get_objectiveName addr 0x2352e58 size 0x8 virtual false final false
inline ::StringW get_objectiveName() ;

/// @brief Method get_objectiveNameLocalized addr 0x2352e60 size 0xc virtual false final false
inline ::StringW get_objectiveNameLocalized() ;

/// @brief Method get_noConditionValue addr 0x2352e6c size 0x8 virtual false final false
inline bool get_noConditionValue() ;

/// @brief Method get_objectiveValueFormater addr 0x2352e74 size 0x8 virtual false final false
inline ::GlobalNamespace::ObjectiveValueFormatterSO* get_objectiveValueFormater() ;

static inline ::GlobalNamespace::MissionObjectiveTypeSO* New_ctor() ;

/// @brief Method .ctor addr 0x2352e7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionObjectiveTypeSO(MissionObjectiveTypeSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionObjectiveTypeSO(MissionObjectiveTypeSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionObjectiveTypeSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveTypeSO, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveTypeSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveTypeSO*, "", "MissionObjectiveTypeSO");
