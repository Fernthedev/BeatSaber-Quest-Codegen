#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ResizableTextMeshPro)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class RectTransform;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class ResizableTextMeshPro;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResizableTextMeshPro);
// Type: ::ResizableTextMeshPro
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5969))
// CS Name: ::ResizableTextMeshPro*
class CORDL_TYPE ResizableTextMeshPro : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _textMeshPro offset 0x18
 __declspec(property(get=__get__textMeshPro, put=__set__textMeshPro)) ::TMPro::TMP_Text*  _textMeshPro;

/// @brief Field _rectTransform offset 0x20
 __declspec(property(get=__get__rectTransform, put=__set__rectTransform)) ::UnityEngine::RectTransform*  _rectTransform;

/// @brief Field _textExtraSpace offset 0x28
 __declspec(property(get=__get__textExtraSpace, put=__set__textExtraSpace)) float_t  _textExtraSpace;

constexpr void __set__textMeshPro(::TMPro::TMP_Text*  value) ;

constexpr ::TMPro::TMP_Text* __get__textMeshPro() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> __get__textMeshPro() const;

constexpr void __set__rectTransform(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__rectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__rectTransform() const;

constexpr void __set__textExtraSpace(float_t  value) ;

constexpr float_t& __get__textExtraSpace() ;

constexpr float_t const& __get__textExtraSpace() const;

/// @brief Method Start addr 0x2309928 size 0xcc virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x23099f4 size 0x80 virtual false final false
inline void Update() ;

/// @brief Method OnDestroy addr 0x2309a74 size 0xcc virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleTextDidChange addr 0x2309b40 size 0x90 virtual false final false
inline void HandleTextDidChange(::UnityEngine::Object*  textMeshPro) ;

static inline ::GlobalNamespace::ResizableTextMeshPro* New_ctor() ;

/// @brief Method .ctor addr 0x2309bd0 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ResizableTextMeshPro", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResizableTextMeshPro(ResizableTextMeshPro && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResizableTextMeshPro", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResizableTextMeshPro(ResizableTextMeshPro const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ResizableTextMeshPro()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResizableTextMeshPro, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResizableTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResizableTextMeshPro*, "", "ResizableTextMeshPro");
