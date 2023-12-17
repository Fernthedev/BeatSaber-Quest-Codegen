#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightGroupEditorPrefabContext)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class LightGroupSO;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupEditorPrefabContext;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupEditorPrefabContext);
// Type: ::LightGroupEditorPrefabContext
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14510))
// CS Name: ::LightGroupEditorPrefabContext*
class CORDL_TYPE LightGroupEditorPrefabContext : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field lightGroups offset 0x18
 __declspec(property(get=__get_lightGroups, put=__set_lightGroups)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*  lightGroups;

constexpr void __set_lightGroups(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* __get_lightGroups() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*> __get_lightGroups() const;

static inline ::GlobalNamespace::LightGroupEditorPrefabContext* New_ctor() ;

/// @brief Method .ctor addr 0x210e33c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupEditorPrefabContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightGroupEditorPrefabContext(LightGroupEditorPrefabContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupEditorPrefabContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightGroupEditorPrefabContext(LightGroupEditorPrefabContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightGroupEditorPrefabContext()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupEditorPrefabContext, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupEditorPrefabContext);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupEditorPrefabContext*, "", "LightGroupEditorPrefabContext");
