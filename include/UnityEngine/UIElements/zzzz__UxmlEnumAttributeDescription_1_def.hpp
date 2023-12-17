#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlEnumAttributeDescription_1)
namespace UnityEngine::UIElements {
template<typename T>
class __UxmlEnumAttributeDescription_1____c;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class __UxmlEnumAttributeDescription_1____c;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class UxmlEnumAttributeDescription_1<T>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class __UxmlEnumAttributeDescription_1____c<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__UxmlEnumAttributeDescription_1____c);
// Type: ::<>c
// Type: UnityEngine.UIElements::UxmlEnumAttributeDescription`1
// Type: ::<>c
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6993)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6993), inst: 974 })
// CS Name: ::UxmlEnumAttributeDescription`1::<>c<T>*
class CORDL_TYPE __UxmlEnumAttributeDescription_1____c<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::UIElements::__UxmlEnumAttributeDescription_1____c<T>*  value) ;

static inline ::UnityEngine::UIElements::__UxmlEnumAttributeDescription_1____c<T>* getStaticF___9() ;

static inline void setStaticF___9__3_0(::System::Func_3<::StringW,T,T>*  value) ;

static inline ::System::Func_3<::StringW,T,T>* getStaticF___9__3_0() ;

static inline void setStaticF___9__4_0(::System::Func_3<::StringW,T,T>*  value) ;

static inline ::System::Func_3<::StringW,T,T>* getStaticF___9__4_0() ;

static inline ::UnityEngine::UIElements::__UxmlEnumAttributeDescription_1____c<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <GetValueFromBag>b__3_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T _GetValueFromBag_b__3_0(::StringW  s, T  convertible) ;

/// @brief Method <TryGetValueFromBag>b__4_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T _TryGetValueFromBag_b__4_0(::StringW  s, T  convertible) ;

// Ctor Parameters [CppParam { name: "", ty: "__UxmlEnumAttributeDescription_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UxmlEnumAttributeDescription_1____c(__UxmlEnumAttributeDescription_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UxmlEnumAttributeDescription_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UxmlEnumAttributeDescription_1____c(__UxmlEnumAttributeDescription_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UxmlEnumAttributeDescription_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__3_0

// Static field <>9__4_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlEnumAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6982), inst: 5215 }), TypeDefinitionIndex(TypeDefinitionIndex(6994)), TypeDefinitionIndex(TypeDefinitionIndex(6982))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6994), inst: 974 })
// CS Name: ::UnityEngine.UIElements::UxmlEnumAttributeDescription`1<T>*
class CORDL_TYPE UxmlEnumAttributeDescription_1<T> : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__UxmlEnumAttributeDescription_1____c<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>)]{};

static inline ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
inline T GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method TryGetValueFromBag addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc, ByRef<T>  value) ;

/// @brief Method ConvertValueToEnum addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static inline U ConvertValueToEnum(::StringW  v, U  defaultValue) ;

// Ctor Parameters [CppParam { name: "", ty: "UxmlEnumAttributeDescription_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlEnumAttributeDescription_1(UxmlEnumAttributeDescription_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlEnumAttributeDescription_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlEnumAttributeDescription_1(UxmlEnumAttributeDescription_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UxmlEnumAttributeDescription_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1, "UnityEngine.UIElements", "UxmlEnumAttributeDescription`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__UxmlEnumAttributeDescription_1____c, "UnityEngine.UIElements", "UxmlEnumAttributeDescription`1/<>c");
