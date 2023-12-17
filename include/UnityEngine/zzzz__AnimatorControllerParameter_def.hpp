#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorControllerParameter)
namespace UnityEngine {
struct AnimatorControllerParameterType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AnimatorControllerParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimatorControllerParameter);
// Type: UnityEngine::AnimatorControllerParameter
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14857))
// CS Name: ::UnityEngine::AnimatorControllerParameter*
class CORDL_TYPE AnimatorControllerParameter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_Name offset 0x10
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::StringW  m_Name;

/// @brief Field m_Type offset 0x18
 __declspec(property(get=__get_m_Type, put=__set_m_Type)) ::UnityEngine::AnimatorControllerParameterType  m_Type;

/// @brief Field m_DefaultFloat offset 0x1c
 __declspec(property(get=__get_m_DefaultFloat, put=__set_m_DefaultFloat)) float_t  m_DefaultFloat;

/// @brief Field m_DefaultInt offset 0x20
 __declspec(property(get=__get_m_DefaultInt, put=__set_m_DefaultInt)) int32_t  m_DefaultInt;

/// @brief Field m_DefaultBool offset 0x24
 __declspec(property(get=__get_m_DefaultBool, put=__set_m_DefaultBool)) bool  m_DefaultBool;

 __declspec(property(get=get_name)) ::StringW  name;

constexpr void __set_m_Name(::StringW  value) ;

constexpr ::StringW& __get_m_Name() ;

constexpr ::StringW const& __get_m_Name() const;

constexpr void __set_m_Type(::UnityEngine::AnimatorControllerParameterType  value) ;

constexpr ::UnityEngine::AnimatorControllerParameterType& __get_m_Type() ;

constexpr ::UnityEngine::AnimatorControllerParameterType const& __get_m_Type() const;

constexpr void __set_m_DefaultFloat(float_t  value) ;

constexpr float_t& __get_m_DefaultFloat() ;

constexpr float_t const& __get_m_DefaultFloat() const;

constexpr void __set_m_DefaultInt(int32_t  value) ;

constexpr int32_t& __get_m_DefaultInt() ;

constexpr int32_t const& __get_m_DefaultInt() const;

constexpr void __set_m_DefaultBool(bool  value) ;

constexpr bool& __get_m_DefaultBool() ;

constexpr bool const& __get_m_DefaultBool() const;

/// @brief Method get_name addr 0x2c8f040 size 0x8 virtual false final false
inline ::StringW get_name() ;

/// @brief Method Equals addr 0x2c8f048 size 0xdc virtual true final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetHashCode addr 0x2c8f124 size 0x20 virtual true final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::AnimatorControllerParameter* New_ctor() ;

/// @brief Method .ctor addr 0x2c8f144 size 0x50 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorControllerParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorControllerParameter(AnimatorControllerParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorControllerParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorControllerParameter(AnimatorControllerParameter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AnimatorControllerParameter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorControllerParameter, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AnimatorControllerParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorControllerParameter*, "UnityEngine", "AnimatorControllerParameter");
