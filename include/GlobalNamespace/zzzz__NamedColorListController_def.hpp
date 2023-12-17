#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListColorController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamedColorListController)
namespace HMUI {
template<typename T>
class IValueChanger_1;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class __NamedColorListController__ColorValuePair;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedColorListController;
}
namespace GlobalNamespace {
class __NamedColorListController__ColorValuePair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedColorListController);
MARK_REF_PTR_T(::GlobalNamespace::__NamedColorListController__ColorValuePair);
// Type: ::ColorValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16150))
// CS Name: ::NamedColorListController::ColorValuePair*
class CORDL_TYPE __NamedColorListController__ColorValuePair : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field color offset 0x10
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field value offset 0x20
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

static inline ::GlobalNamespace::__NamedColorListController__ColorValuePair* New_ctor() ;

/// @brief Method .ctor addr 0x23e547c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__NamedColorListController__ColorValuePair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NamedColorListController__ColorValuePair(__NamedColorListController__ColorValuePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NamedColorListController__ColorValuePair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NamedColorListController__ColorValuePair(__NamedColorListController__ColorValuePair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NamedColorListController__ColorValuePair()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NamedColorListController__ColorValuePair, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NamedColorListController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16148))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16151))
// CS Name: ::NamedColorListController*
class CORDL_TYPE NamedColorListController : public ::GlobalNamespace::ListColorController {
public:
// Declarations
using ColorValuePair = ::GlobalNamespace::__NamedColorListController__ColorValuePair;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::ListColorController)]{};

/// @brief Field _textValuePairs offset 0x28
 __declspec(property(get=__get__textValuePairs, put=__set__textValuePairs)) ::ArrayW<::GlobalNamespace::__NamedColorListController__ColorValuePair*,::Array<::GlobalNamespace::__NamedColorListController__ColorValuePair*>*>  _textValuePairs;

/// @brief Field _value offset 0x30
 __declspec(property(get=__get__value, put=__set__value)) int32_t  _value;

/// @brief Field valueChangedEvent offset 0x38
 __declspec(property(get=__get_valueChangedEvent, put=__set_valueChangedEvent)) ::System::Action_1<int32_t>*  valueChangedEvent;

/// @brief Convert operator to "::HMUI::IValueChanger_1<int32_t>"
constexpr operator  ::HMUI::IValueChanger_1<int32_t>*() noexcept;

constexpr void __set__textValuePairs(::ArrayW<::GlobalNamespace::__NamedColorListController__ColorValuePair*,::Array<::GlobalNamespace::__NamedColorListController__ColorValuePair*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__NamedColorListController__ColorValuePair*,::Array<::GlobalNamespace::__NamedColorListController__ColorValuePair*>*>& __get__textValuePairs() ;

constexpr ::ArrayW<::GlobalNamespace::__NamedColorListController__ColorValuePair*,::Array<::GlobalNamespace::__NamedColorListController__ColorValuePair*>*> const& __get__textValuePairs() const;

constexpr void __set__value(int32_t  value) ;

constexpr int32_t& __get__value() ;

constexpr int32_t const& __get__value() const;

constexpr void __set_valueChangedEvent(::System::Action_1<int32_t>*  value) ;

constexpr ::System::Action_1<int32_t>* __get_valueChangedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> __get_valueChangedEvent() const;

/// @brief Method add_valueChangedEvent addr 0x23e51d0 size 0xb0 virtual true final true
inline void add_valueChangedEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_valueChangedEvent addr 0x23e5280 size 0xb0 virtual true final true
inline void remove_valueChangedEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method Init addr 0x23e5330 size 0x3c virtual false final false
inline void Init(::ArrayW<::GlobalNamespace::__NamedColorListController__ColorValuePair*,::Array<::GlobalNamespace::__NamedColorListController__ColorValuePair*>*>  values, int32_t  value) ;

/// @brief Method SetValue addr 0x23e536c size 0x38 virtual false final false
inline void SetValue(int32_t  value) ;

/// @brief Method GetInitValues addr 0x23e53a4 size 0x74 virtual true final false
inline bool GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements) ;

/// @brief Method ApplyValue addr 0x23e5418 size 0x20 virtual true final false
inline void ApplyValue(int32_t  idx) ;

/// @brief Method ColorForValue addr 0x23e5438 size 0x3c virtual true final false
inline ::UnityEngine::Color ColorForValue(int32_t  idx) ;

static inline ::GlobalNamespace::NamedColorListController* New_ctor() ;

/// @brief Method .ctor addr 0x23e5474 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NamedColorListController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NamedColorListController(NamedColorListController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NamedColorListController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NamedColorListController(NamedColorListController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NamedColorListController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedColorListController, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedColorListController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedColorListController*, "", "NamedColorListController");
NEED_NO_BOX(::GlobalNamespace::__NamedColorListController__ColorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NamedColorListController__ColorValuePair*, "", "NamedColorListController/ColorValuePair");
