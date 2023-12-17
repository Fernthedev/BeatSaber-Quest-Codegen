#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListDragAndDropArgs)
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class IDragAndDropData;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct DragAndDropPosition;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ListDragAndDropArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ListDragAndDropArgs);
// Type: UnityEngine.UIElements::ListDragAndDropArgs
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6953))
// CS Name: ::UnityEngine.UIElements::ListDragAndDropArgs
struct CORDL_TYPE ListDragAndDropArgs : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <target>k__BackingField offset 0x0
 __declspec(property(get=__get__target_k__BackingField, put=__set__target_k__BackingField)) ::System::Object*  _target_k__BackingField;

/// @brief Field <insertAtIndex>k__BackingField offset 0x8
 __declspec(property(get=__get__insertAtIndex_k__BackingField, put=__set__insertAtIndex_k__BackingField)) int32_t  _insertAtIndex_k__BackingField;

/// @brief Field <dragAndDropPosition>k__BackingField offset 0xc
 __declspec(property(get=__get__dragAndDropPosition_k__BackingField, put=__set__dragAndDropPosition_k__BackingField)) ::UnityEngine::UIElements::DragAndDropPosition  _dragAndDropPosition_k__BackingField;

/// @brief Field <dragAndDropData>k__BackingField offset 0x10
 __declspec(property(get=__get__dragAndDropData_k__BackingField, put=__set__dragAndDropData_k__BackingField)) ::UnityEngine::UIElements::IDragAndDropData*  _dragAndDropData_k__BackingField;

 __declspec(property(put=set_target)) ::System::Object*  target;

 __declspec(property(get=get_insertAtIndex, put=set_insertAtIndex)) int32_t  insertAtIndex;

 __declspec(property(get=get_dragAndDropPosition, put=set_dragAndDropPosition)) ::UnityEngine::UIElements::DragAndDropPosition  dragAndDropPosition;

 __declspec(property(get=get_dragAndDropData, put=set_dragAndDropData)) ::UnityEngine::UIElements::IDragAndDropData*  dragAndDropData;

/// @brief Convert operator to "::UnityEngine::UIElements::IListDragAndDropArgs"
constexpr operator  ::UnityEngine::UIElements::IListDragAndDropArgs*() ;

constexpr void __set__target_k__BackingField(::System::Object*  value) ;

constexpr ::System::Object* __get__target_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__target_k__BackingField() const;

constexpr void __set__insertAtIndex_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__insertAtIndex_k__BackingField() ;

constexpr int32_t const& __get__insertAtIndex_k__BackingField() const;

constexpr void __set__dragAndDropPosition_k__BackingField(::UnityEngine::UIElements::DragAndDropPosition  value) ;

constexpr ::UnityEngine::UIElements::DragAndDropPosition& __get__dragAndDropPosition_k__BackingField() ;

constexpr ::UnityEngine::UIElements::DragAndDropPosition const& __get__dragAndDropPosition_k__BackingField() const;

constexpr void __set__dragAndDropData_k__BackingField(::UnityEngine::UIElements::IDragAndDropData*  value) ;

constexpr ::UnityEngine::UIElements::IDragAndDropData* __get__dragAndDropData_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IDragAndDropData*> __get__dragAndDropData_k__BackingField() const;

/// @brief Method set_target addr 0x2e0994c size 0x8 virtual false final false
inline void set_target(::System::Object*  value) ;

/// @brief Method get_insertAtIndex addr 0x2e09954 size 0x8 virtual true final true
inline int32_t get_insertAtIndex() ;

/// @brief Method set_insertAtIndex addr 0x2e0995c size 0x8 virtual false final false
inline void set_insertAtIndex(int32_t  value) ;

/// @brief Method get_dragAndDropPosition addr 0x2e09964 size 0x8 virtual true final true
inline ::UnityEngine::UIElements::DragAndDropPosition get_dragAndDropPosition() ;

/// @brief Method set_dragAndDropPosition addr 0x2e0996c size 0x8 virtual false final false
inline void set_dragAndDropPosition(::UnityEngine::UIElements::DragAndDropPosition  value) ;

/// @brief Method get_dragAndDropData addr 0x2e09974 size 0x8 virtual true final true
inline ::UnityEngine::UIElements::IDragAndDropData* get_dragAndDropData() ;

/// @brief Method set_dragAndDropData addr 0x2e0997c size 0x8 virtual false final false
inline void set_dragAndDropData(::UnityEngine::UIElements::IDragAndDropData*  value) ;

// Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_insertAtIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_dragAndDropPosition_k__BackingField", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: None }, CppParam { name: "_dragAndDropData_k__BackingField", ty: "::UnityEngine::UIElements::IDragAndDropData*", modifiers: "", def_value: None }]
constexpr ListDragAndDropArgs(::System::Object*  _target_k__BackingField, int32_t  _insertAtIndex_k__BackingField, ::UnityEngine::UIElements::DragAndDropPosition  _dragAndDropPosition_k__BackingField, ::UnityEngine::UIElements::IDragAndDropData*  _dragAndDropData_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ListDragAndDropArgs(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ListDragAndDropArgs()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListDragAndDropArgs, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListDragAndDropArgs, "UnityEngine.UIElements", "ListDragAndDropArgs");
