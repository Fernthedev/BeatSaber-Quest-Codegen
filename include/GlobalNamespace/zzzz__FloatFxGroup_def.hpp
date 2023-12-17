#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
CORDL_MODULE_EXPORT(FloatFxGroup)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxGroup);
// Type: ::FloatFxGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4935))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4903))
// CS Name: ::FloatFxGroup*
class CORDL_TYPE FloatFxGroup : public ::GlobalNamespace::LightGroupSubsystem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::LightGroupSubsystem)]{};

/// @brief Field _isTriggerOnly offset 0x20
 __declspec(property(get=__get__isTriggerOnly, put=__set__isTriggerOnly)) bool  _isTriggerOnly;

/// @brief Field _targets offset 0x28
 __declspec(property(get=__get__targets, put=__set__targets)) ::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*  _targets;

 __declspec(property(get=get_isTriggerOnly)) bool  isTriggerOnly;

 __declspec(property(get=get_targets)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*  targets;

constexpr void __set__isTriggerOnly(bool  value) ;

constexpr bool& __get__isTriggerOnly() ;

constexpr bool const& __get__isTriggerOnly() const;

constexpr void __set__targets(::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* __get__targets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*> __get__targets() const;

/// @brief Method get_isTriggerOnly addr 0x23a5800 size 0x8 virtual false final false
inline bool get_isTriggerOnly() ;

/// @brief Method get_targets addr 0x23a5808 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* get_targets() ;

static inline ::GlobalNamespace::FloatFxGroup* New_ctor() ;

/// @brief Method .ctor addr 0x23a5810 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatFxGroup(FloatFxGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatFxGroup(FloatFxGroup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloatFxGroup()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroup, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroup*, "", "FloatFxGroup");
