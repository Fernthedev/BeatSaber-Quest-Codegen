#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArgumentCache)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Events {
class ArgumentCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::ArgumentCache);
// Type: UnityEngine.Events::ArgumentCache
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10449))
// CS Name: ::UnityEngine.Events::ArgumentCache*
class CORDL_TYPE ArgumentCache : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field m_ObjectArgument offset 0x10
 __declspec(property(get=__get_m_ObjectArgument, put=__set_m_ObjectArgument)) ::UnityEngine::Object*  m_ObjectArgument;

/// @brief Field m_ObjectArgumentAssemblyTypeName offset 0x18
 __declspec(property(get=__get_m_ObjectArgumentAssemblyTypeName, put=__set_m_ObjectArgumentAssemblyTypeName)) ::StringW  m_ObjectArgumentAssemblyTypeName;

/// @brief Field m_IntArgument offset 0x20
 __declspec(property(get=__get_m_IntArgument, put=__set_m_IntArgument)) int32_t  m_IntArgument;

/// @brief Field m_FloatArgument offset 0x24
 __declspec(property(get=__get_m_FloatArgument, put=__set_m_FloatArgument)) float_t  m_FloatArgument;

/// @brief Field m_StringArgument offset 0x28
 __declspec(property(get=__get_m_StringArgument, put=__set_m_StringArgument)) ::StringW  m_StringArgument;

/// @brief Field m_BoolArgument offset 0x30
 __declspec(property(get=__get_m_BoolArgument, put=__set_m_BoolArgument)) bool  m_BoolArgument;

 __declspec(property(get=get_unityObjectArgument)) ::UnityEngine::Object*  unityObjectArgument;

 __declspec(property(get=get_unityObjectArgumentAssemblyTypeName)) ::StringW  unityObjectArgumentAssemblyTypeName;

 __declspec(property(get=get_intArgument)) int32_t  intArgument;

 __declspec(property(get=get_floatArgument)) float_t  floatArgument;

 __declspec(property(get=get_stringArgument)) ::StringW  stringArgument;

 __declspec(property(get=get_boolArgument)) bool  boolArgument;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

constexpr void __set_m_ObjectArgument(::UnityEngine::Object*  value) ;

constexpr ::UnityEngine::Object* __get_m_ObjectArgument() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> __get_m_ObjectArgument() const;

constexpr void __set_m_ObjectArgumentAssemblyTypeName(::StringW  value) ;

constexpr ::StringW& __get_m_ObjectArgumentAssemblyTypeName() ;

constexpr ::StringW const& __get_m_ObjectArgumentAssemblyTypeName() const;

constexpr void __set_m_IntArgument(int32_t  value) ;

constexpr int32_t& __get_m_IntArgument() ;

constexpr int32_t const& __get_m_IntArgument() const;

constexpr void __set_m_FloatArgument(float_t  value) ;

constexpr float_t& __get_m_FloatArgument() ;

constexpr float_t const& __get_m_FloatArgument() const;

constexpr void __set_m_StringArgument(::StringW  value) ;

constexpr ::StringW& __get_m_StringArgument() ;

constexpr ::StringW const& __get_m_StringArgument() const;

constexpr void __set_m_BoolArgument(bool  value) ;

constexpr bool& __get_m_BoolArgument() ;

constexpr bool const& __get_m_BoolArgument() const;

/// @brief Method get_unityObjectArgument addr 0x2cf83b0 size 0x8 virtual false final false
inline ::UnityEngine::Object* get_unityObjectArgument() ;

/// @brief Method get_unityObjectArgumentAssemblyTypeName addr 0x2cf83b8 size 0x8 virtual false final false
inline ::StringW get_unityObjectArgumentAssemblyTypeName() ;

/// @brief Method get_intArgument addr 0x2cf83c0 size 0x8 virtual false final false
inline int32_t get_intArgument() ;

/// @brief Method get_floatArgument addr 0x2cf83c8 size 0x8 virtual false final false
inline float_t get_floatArgument() ;

/// @brief Method get_stringArgument addr 0x2cf83d0 size 0x8 virtual false final false
inline ::StringW get_stringArgument() ;

/// @brief Method get_boolArgument addr 0x2cf83d8 size 0x8 virtual false final false
inline bool get_boolArgument() ;

/// @brief Method OnBeforeSerialize addr 0x2cf83e0 size 0x1c virtual true final true
inline void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x2cf83fc size 0x1c virtual true final true
inline void OnAfterDeserialize() ;

static inline ::UnityEngine::Events::ArgumentCache* New_ctor() ;

/// @brief Method .ctor addr 0x2cf8418 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArgumentCache(ArgumentCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArgumentCache(ArgumentCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArgumentCache()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::ArgumentCache, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::ArgumentCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::ArgumentCache*, "UnityEngine.Events", "ArgumentCache");
