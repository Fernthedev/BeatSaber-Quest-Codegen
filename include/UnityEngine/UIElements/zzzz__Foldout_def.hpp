#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Foldout)
namespace UnityEngine::UIElements {
class __Foldout__UxmlTraits;
}
namespace UnityEngine::UIElements {
template<typename T>
class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class __Foldout__UxmlFactory;
}
namespace UnityEngine::UIElements {
class Toggle;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Foldout;
}
namespace UnityEngine::UIElements {
class __Foldout__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Foldout__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Foldout);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Foldout__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Foldout__UxmlTraits);
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6800))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7086))
// CS Name: ::Foldout::UxmlTraits*
class CORDL_TYPE __Foldout__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__BindableElement__UxmlTraits)]{};

/// @brief Field m_Text offset 0x78
 __declspec(property(get=__get_m_Text, put=__set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Text;

/// @brief Field m_Value offset 0x80
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_Value;

constexpr void __set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Text() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Text() const;

constexpr void __set_m_Value(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* __get_m_Value() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> __get_m_Value() const;

/// @brief Method Init addr 0x2e330e8 size 0x130 virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::__Foldout__UxmlTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e33218 size 0xec virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__Foldout__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Foldout__UxmlTraits(__Foldout__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Foldout__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Foldout__UxmlTraits(__Foldout__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Foldout__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Foldout__UxmlTraits, 0x88>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Foldout
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6801))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7087))
// CS Name: ::UnityEngine.UIElements::Foldout*
class CORDL_TYPE Foldout : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__Foldout__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::__Foldout__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x3d8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x3d8 - sizeof(::UnityEngine::UIElements::BindableElement)]{};

/// @brief Field m_Toggle offset 0x3c0
 __declspec(property(get=__get_m_Toggle, put=__set_m_Toggle)) ::UnityEngine::UIElements::Toggle*  m_Toggle;

/// @brief Field m_Container offset 0x3c8
 __declspec(property(get=__get_m_Container, put=__set_m_Container)) ::UnityEngine::UIElements::VisualElement*  m_Container;

/// @brief Field m_Value offset 0x3d0
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) bool  m_Value;

 __declspec(property(get=get_contentContainer)) ::UnityEngine::UIElements::VisualElement*  contentContainer;

 __declspec(property(put=set_text)) ::StringW  text;

 __declspec(property(get=get_value, put=set_value)) bool  value;

/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<bool>"
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<bool>*() noexcept;

constexpr void __set_m_Toggle(::UnityEngine::UIElements::Toggle*  value) ;

constexpr ::UnityEngine::UIElements::Toggle* __get_m_Toggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Toggle*> __get_m_Toggle() const;

constexpr void __set_m_Container(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_Container() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_Container() const;

constexpr void __set_m_Value(bool  value) ;

constexpr bool& __get_m_Value() ;

constexpr bool const& __get_m_Value() const;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_toggleUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_toggleUssClassName() ;

static inline void setStaticF_contentUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_contentUssClassName() ;

static inline void setStaticF_inputUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inputUssClassName() ;

static inline void setStaticF_checkmarkUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_checkmarkUssClassName() ;

static inline void setStaticF_textUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_textUssClassName() ;

static inline void setStaticF_ussFoldoutDepthClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussFoldoutDepthClassName() ;

static inline void setStaticF_ussFoldoutMaxDepth(int32_t  value) ;

static inline int32_t getStaticF_ussFoldoutMaxDepth() ;

/// @brief Method get_contentContainer addr 0x2e32990 size 0x8 virtual true final false
inline ::UnityEngine::UIElements::VisualElement* get_contentContainer() ;

/// @brief Method set_text addr 0x2e2c448 size 0x124 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method get_value addr 0x2e32998 size 0x8 virtual true final true
inline bool get_value() ;

/// @brief Method set_value addr 0x2e329a0 size 0x1e0 virtual true final true
inline void set_value(bool  value) ;

/// @brief Method SetValueWithoutNotify addr 0x2e32b80 size 0x120 virtual true final true
inline void SetValueWithoutNotify(bool  newValue) ;

/// @brief Method OnViewDataReady addr 0x2e32ca0 size 0x40 virtual true final false
inline void OnViewDataReady() ;

static inline ::UnityEngine::UIElements::Foldout* New_ctor() ;

/// @brief Method .ctor addr 0x2e2c118 size 0x330 virtual false final false
inline void _ctor() ;

/// @brief Method OnAttachToPanel addr 0x2e32ce8 size 0x1c0 virtual false final false
inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  evt) ;

/// @brief Method <.ctor>b__23_0 addr 0x2e33050 size 0x50 virtual false final false
inline void __ctor_b__23_0(::UnityEngine::UIElements::ChangeEvent_1<bool>*  evt) ;

// Ctor Parameters [CppParam { name: "", ty: "Foldout", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Foldout(Foldout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Foldout", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Foldout(Foldout const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Foldout()  = default;
public:


// Fields

// Static field ussClassName

// Static field toggleUssClassName

// Static field contentUssClassName

// Static field inputUssClassName

// Static field checkmarkUssClassName

// Static field textUssClassName

// Static field ussFoldoutDepthClassName

// Static field ussFoldoutMaxDepth


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Foldout, 0x3d8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(7087)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5260 }), TypeDefinitionIndex(TypeDefinitionIndex(7086))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7085))
// CS Name: ::Foldout::UxmlFactory*
class CORDL_TYPE __Foldout__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Foldout*,::UnityEngine::UIElements::__Foldout__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Foldout*,::UnityEngine::UIElements::__Foldout__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::__Foldout__UxmlFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e330a0 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__Foldout__UxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Foldout__UxmlFactory(__Foldout__UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Foldout__UxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Foldout__UxmlFactory(__Foldout__UxmlFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Foldout__UxmlFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Foldout__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Foldout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Foldout*, "UnityEngine.UIElements", "Foldout");
NEED_NO_BOX(::UnityEngine::UIElements::__Foldout__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Foldout__UxmlFactory*, "UnityEngine.UIElements", "Foldout/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Foldout__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Foldout__UxmlTraits*, "UnityEngine.UIElements", "Foldout/UxmlTraits");
