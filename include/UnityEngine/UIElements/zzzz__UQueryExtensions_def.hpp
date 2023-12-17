#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UQueryExtensions)
namespace UnityEngine::UIElements {
template<typename T>
struct UQueryState_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
template<typename T>
struct UQueryBuilder_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UQueryExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UQueryExtensions);
// Type: UnityEngine.UIElements::UQueryExtensions
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6932))
// CS Name: ::UnityEngine.UIElements::UQueryExtensions*
class CORDL_TYPE UQueryExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_SingleElementEmptyQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>  value) ;

static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementEmptyQuery() ;

static inline void setStaticF_SingleElementNameQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>  value) ;

static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementNameQuery() ;

static inline void setStaticF_SingleElementClassQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>  value) ;

static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementClassQuery() ;

static inline void setStaticF_SingleElementNameAndClassQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>  value) ;

static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementNameAndClassQuery() ;

static inline void setStaticF_SingleElementTypeQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>  value) ;

static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementTypeQuery() ;

static inline void setStaticF_SingleElementTypeAndNameQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>  value) ;

static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementTypeAndNameQuery() ;

static inline void setStaticF_SingleElementTypeAndClassQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>  value) ;

static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementTypeAndClassQuery() ;

static inline void setStaticF_SingleElementTypeAndNameAndClassQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>  value) ;

static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementTypeAndNameAndClassQuery() ;

/// @brief Method Q addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T Q(::UnityEngine::UIElements::VisualElement*  e, ::StringW  name, ::StringW  className) ;

/// @brief Method Q addr 0x2e04a64 size 0x3e0 virtual false final false
static inline ::UnityEngine::UIElements::VisualElement* Q(::UnityEngine::UIElements::VisualElement*  e, ::StringW  name, ::StringW  className) ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::UnityEngine::UIElements::UQueryBuilder_1<T> Query(::UnityEngine::UIElements::VisualElement*  e, ::StringW  name, ::StringW  className) ;

// Ctor Parameters [CppParam { name: "", ty: "UQueryExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UQueryExtensions(UQueryExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UQueryExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UQueryExtensions(UQueryExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UQueryExtensions()  = default;
public:


// Fields

// Static field SingleElementEmptyQuery

// Static field SingleElementNameQuery

// Static field SingleElementClassQuery

// Static field SingleElementNameAndClassQuery

// Static field SingleElementTypeQuery

// Static field SingleElementTypeAndNameQuery

// Static field SingleElementTypeAndClassQuery

// Static field SingleElementTypeAndNameAndClassQuery


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UQueryExtensions, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UQueryExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UQueryExtensions*, "UnityEngine.UIElements", "UQueryExtensions");
