#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableBinding)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Playables {
class __PlayableBinding__CreateOutputMethod;
}
// Forward declare root types
namespace UnityEngine::Playables {
class __PlayableBinding__CreateOutputMethod;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod);
MARK_VAL_T(::UnityEngine::Playables::PlayableBinding);
// Type: ::CreateOutputMethod
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10430))
// CS Name: ::PlayableBinding::CreateOutputMethod*
class CORDL_TYPE __PlayableBinding__CreateOutputMethod : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2cf6068 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2cf612c size 0x14 virtual true final false
inline ::UnityEngine::Playables::PlayableOutput Invoke(::UnityEngine::Playables::PlayableGraph  graph, ::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "__PlayableBinding__CreateOutputMethod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PlayableBinding__CreateOutputMethod(__PlayableBinding__CreateOutputMethod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PlayableBinding__CreateOutputMethod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PlayableBinding__CreateOutputMethod(__PlayableBinding__CreateOutputMethod const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PlayableBinding__CreateOutputMethod()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
// Type: UnityEngine.Playables::PlayableBinding
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10431))
// CS Name: ::UnityEngine.Playables::PlayableBinding
struct CORDL_TYPE PlayableBinding : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using CreateOutputMethod = ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_StreamName offset 0x0
 __declspec(property(get=__get_m_StreamName, put=__set_m_StreamName)) ::StringW  m_StreamName;

/// @brief Field m_SourceObject offset 0x8
 __declspec(property(get=__get_m_SourceObject, put=__set_m_SourceObject)) ::UnityEngine::Object*  m_SourceObject;

/// @brief Field m_SourceBindingType offset 0x10
 __declspec(property(get=__get_m_SourceBindingType, put=__set_m_SourceBindingType)) ::System::Type*  m_SourceBindingType;

/// @brief Field m_CreateOutputMethod offset 0x18
 __declspec(property(get=__get_m_CreateOutputMethod, put=__set_m_CreateOutputMethod)) ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*  m_CreateOutputMethod;

 __declspec(property(get=get_streamName)) ::StringW  streamName;

 __declspec(property(get=get_sourceObject)) ::UnityEngine::Object*  sourceObject;

constexpr void __set_m_StreamName(::StringW  value) ;

constexpr ::StringW& __get_m_StreamName() ;

constexpr ::StringW const& __get_m_StreamName() const;

constexpr void __set_m_SourceObject(::UnityEngine::Object*  value) ;

constexpr ::UnityEngine::Object* __get_m_SourceObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> __get_m_SourceObject() const;

constexpr void __set_m_SourceBindingType(::System::Type*  value) ;

constexpr ::System::Type* __get_m_SourceBindingType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_SourceBindingType() const;

constexpr void __set_m_CreateOutputMethod(::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*  value) ;

constexpr ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod* __get_m_CreateOutputMethod() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*> __get_m_CreateOutputMethod() const;

static inline void setStaticF_None(::ArrayW<::UnityEngine::Playables::PlayableBinding,::Array<::UnityEngine::Playables::PlayableBinding>*>  value) ;

static inline ::ArrayW<::UnityEngine::Playables::PlayableBinding,::Array<::UnityEngine::Playables::PlayableBinding>*> getStaticF_None() ;

static inline void setStaticF_DefaultDuration(double_t  value) ;

static inline double_t getStaticF_DefaultDuration() ;

/// @brief Method get_streamName addr 0x2cf5eec size 0x8 virtual false final false
inline ::StringW get_streamName() ;

/// @brief Method get_sourceObject addr 0x2cf5ef4 size 0x8 virtual false final false
inline ::UnityEngine::Object* get_sourceObject() ;

/// @brief Method CreateOutput addr 0x2cf5efc size 0x90 virtual false final false
inline ::UnityEngine::Playables::PlayableOutput CreateOutput(::UnityEngine::Playables::PlayableGraph  graph) ;

/// @brief Method CreateInternal addr 0x2cf5fe4 size 0xc virtual false final false
static inline ::UnityEngine::Playables::PlayableBinding CreateInternal(::StringW  name, ::UnityEngine::Object*  sourceObject, ::System::Type*  sourceType, ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*  createFunction) ;

// Ctor Parameters [CppParam { name: "m_StreamName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_SourceObject", ty: "::UnityEngine::Object*", modifiers: "", def_value: None }, CppParam { name: "m_SourceBindingType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "m_CreateOutputMethod", ty: "::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*", modifiers: "", def_value: None }]
constexpr PlayableBinding(::StringW  m_StreamName, ::UnityEngine::Object*  m_SourceObject, ::System::Type*  m_SourceBindingType, ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*  m_CreateOutputMethod) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PlayableBinding(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PlayableBinding()  = default;


// Fields

// Static field None

// Static field DefaultDuration


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableBinding, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*, "UnityEngine.Playables", "PlayableBinding/CreateOutputMethod");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableBinding, "UnityEngine.Playables", "PlayableBinding");
