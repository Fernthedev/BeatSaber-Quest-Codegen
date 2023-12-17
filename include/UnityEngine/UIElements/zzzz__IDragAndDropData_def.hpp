#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDragAndDropData)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IDragAndDropData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IDragAndDropData);
// Type: UnityEngine.UIElements::IDragAndDropData
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6966))
// CS Name: ::UnityEngine.UIElements::IDragAndDropData*
class CORDL_TYPE IDragAndDropData {
public:
// Declarations
 __declspec(property(get=get_userData)) ::System::Object*  userData;

/// @brief Method get_userData addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* get_userData() ;

// Ctor Parameters [CppParam { name: "", ty: "IDragAndDropData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IDragAndDropData(IDragAndDropData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IDragAndDropData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDragAndDropData(IDragAndDropData const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IDragAndDropData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IDragAndDropData*, "UnityEngine.UIElements", "IDragAndDropData");
