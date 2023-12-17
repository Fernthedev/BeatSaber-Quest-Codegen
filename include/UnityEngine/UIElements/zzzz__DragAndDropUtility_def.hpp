#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DragAndDropUtility)
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DragAndDropUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DragAndDropUtility);
// Type: UnityEngine.UIElements::DragAndDropUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6963))
// CS Name: ::UnityEngine.UIElements::DragAndDropUtility*
class CORDL_TYPE DragAndDropUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_MakeClientFunc(::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>*  value) ;

static inline ::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* getStaticF_s_MakeClientFunc() ;

static inline void setStaticF_s_DragAndDrop(::UnityEngine::UIElements::IDragAndDrop*  value) ;

static inline ::UnityEngine::UIElements::IDragAndDrop* getStaticF_s_DragAndDrop() ;

/// @brief Method get_dragAndDrop addr 0x2e0b62c size 0xac virtual false final false
static inline ::UnityEngine::UIElements::IDragAndDrop* get_dragAndDrop() ;

// Ctor Parameters [CppParam { name: "", ty: "DragAndDropUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DragAndDropUtility(DragAndDropUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DragAndDropUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DragAndDropUtility(DragAndDropUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DragAndDropUtility()  = default;
public:


// Fields

// Static field s_MakeClientFunc

// Static field s_DragAndDrop


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragAndDropUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DragAndDropUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragAndDropUtility*, "UnityEngine.UIElements", "DragAndDropUtility");
