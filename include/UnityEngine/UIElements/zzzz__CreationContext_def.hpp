#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreationContext)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
struct __TemplateAsset__AttributeOverride;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::CreationContext);
// Type: UnityEngine.UIElements::CreationContext
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7012))
// CS Name: ::UnityEngine.UIElements::CreationContext
struct CORDL_TYPE CreationContext : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <target>k__BackingField offset 0x0
 __declspec(property(get=__get__target_k__BackingField, put=__set__target_k__BackingField)) ::UnityEngine::UIElements::VisualElement*  _target_k__BackingField;

/// @brief Field <visualTreeAsset>k__BackingField offset 0x8
 __declspec(property(get=__get__visualTreeAsset_k__BackingField, put=__set__visualTreeAsset_k__BackingField)) ::UnityEngine::UIElements::VisualTreeAsset*  _visualTreeAsset_k__BackingField;

/// @brief Field <slotInsertionPoints>k__BackingField offset 0x10
 __declspec(property(get=__get__slotInsertionPoints_k__BackingField, put=__set__slotInsertionPoints_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*  _slotInsertionPoints_k__BackingField;

/// @brief Field <attributeOverrides>k__BackingField offset 0x18
 __declspec(property(get=__get__attributeOverrides_k__BackingField, put=__set__attributeOverrides_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*  _attributeOverrides_k__BackingField;

 __declspec(property(get=get_target, put=set_target)) ::UnityEngine::UIElements::VisualElement*  target;

 __declspec(property(get=get_visualTreeAsset, put=set_visualTreeAsset)) ::UnityEngine::UIElements::VisualTreeAsset*  visualTreeAsset;

 __declspec(property(get=get_slotInsertionPoints, put=set_slotInsertionPoints)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*  slotInsertionPoints;

 __declspec(property(get=get_attributeOverrides, put=set_attributeOverrides)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*  attributeOverrides;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*() ;

static inline void setStaticF_Default(::UnityEngine::UIElements::CreationContext  value) ;

static inline ::UnityEngine::UIElements::CreationContext getStaticF_Default() ;

constexpr void __set__target_k__BackingField(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get__target_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get__target_k__BackingField() const;

constexpr void __set__visualTreeAsset_k__BackingField(::UnityEngine::UIElements::VisualTreeAsset*  value) ;

constexpr ::UnityEngine::UIElements::VisualTreeAsset* __get__visualTreeAsset_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> __get__visualTreeAsset_k__BackingField() const;

constexpr void __set__slotInsertionPoints_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>* __get__slotInsertionPoints_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*> __get__slotInsertionPoints_k__BackingField() const;

constexpr void __set__attributeOverrides_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* __get__attributeOverrides_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*> __get__attributeOverrides_k__BackingField() const;

/// @brief Method get_target addr 0x2e147e0 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_target() ;

/// @brief Method set_target addr 0x2e147e8 size 0x8 virtual false final false
inline void set_target(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method get_visualTreeAsset addr 0x2e147f0 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::VisualTreeAsset* get_visualTreeAsset() ;

/// @brief Method set_visualTreeAsset addr 0x2e147f8 size 0x8 virtual false final false
inline void set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset*  value) ;

/// @brief Method get_slotInsertionPoints addr 0x2e14800 size 0x8 virtual false final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>* get_slotInsertionPoints() ;

/// @brief Method set_slotInsertionPoints addr 0x2e14808 size 0x8 virtual false final false
inline void set_slotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*  value) ;

/// @brief Method get_attributeOverrides addr 0x2e14810 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* get_attributeOverrides() ;

/// @brief Method set_attributeOverrides addr 0x2e14818 size 0x8 virtual false final false
inline void set_attributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*  value) ;

/// @brief Method .ctor addr 0x2e122c8 size 0xc virtual false final false
inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*  slotInsertionPoints, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*  attributeOverrides, ::UnityEngine::UIElements::VisualTreeAsset*  vta, ::UnityEngine::UIElements::VisualElement*  target) ;

/// @brief Method Equals addr 0x2e14820 size 0x88 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2e148a8 size 0xf0 virtual true final true
inline bool Equals(::UnityEngine::UIElements::CreationContext  other) ;

/// @brief Method GetHashCode addr 0x2e14998 size 0xf0 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "_visualTreeAsset_k__BackingField", ty: "::UnityEngine::UIElements::VisualTreeAsset*", modifiers: "", def_value: None }, CppParam { name: "_slotInsertionPoints_k__BackingField", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name: "_attributeOverrides_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*", modifiers: "", def_value: None }]
constexpr CreationContext(::UnityEngine::UIElements::VisualElement*  _target_k__BackingField, ::UnityEngine::UIElements::VisualTreeAsset*  _visualTreeAsset_k__BackingField, ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*  _slotInsertionPoints_k__BackingField, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*  _attributeOverrides_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CreationContext(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CreationContext()  = default;


// Fields

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CreationContext, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CreationContext, "UnityEngine.UIElements", "CreationContext");
