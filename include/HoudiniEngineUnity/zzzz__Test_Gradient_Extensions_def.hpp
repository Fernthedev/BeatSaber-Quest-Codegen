#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Test_Gradient_Extensions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class Test_Gradient;
}
namespace UnityEngine {
class Gradient;
}
namespace HoudiniEngineUnity {
class __Test_Gradient_Extensions____c;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Gradient_Extensions;
}
namespace HoudiniEngineUnity {
class __Test_Gradient_Extensions____c;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Gradient_Extensions);
MARK_REF_PTR_T(::HoudiniEngineUnity::__Test_Gradient_Extensions____c);
// Type: ::<>c
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9928))
// CS Name: ::Test_Gradient_Extensions::<>c*
class CORDL_TYPE __Test_Gradient_Extensions____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::HoudiniEngineUnity::__Test_Gradient_Extensions____c*  value) ;

static inline ::HoudiniEngineUnity::__Test_Gradient_Extensions____c* getStaticF___9() ;

static inline void setStaticF___9__1_0(::System::Converter_2<::UnityEngine::Gradient*,::HoudiniEngineUnity::Test_Gradient*>*  value) ;

static inline ::System::Converter_2<::UnityEngine::Gradient*,::HoudiniEngineUnity::Test_Gradient*>* getStaticF___9__1_0() ;

static inline void setStaticF___9__2_0(::System::Converter_2<::UnityEngine::Gradient*,::HoudiniEngineUnity::Test_Gradient*>*  value) ;

static inline ::System::Converter_2<::UnityEngine::Gradient*,::HoudiniEngineUnity::Test_Gradient*>* getStaticF___9__2_0() ;

static inline ::HoudiniEngineUnity::__Test_Gradient_Extensions____c* New_ctor() ;

/// @brief Method .ctor addr 0x21e6ebc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ToTestObject>b__1_0 addr 0x21e6ec4 size 0x64 virtual false final false
inline ::HoudiniEngineUnity::Test_Gradient* _ToTestObject_b__1_0(::UnityEngine::Gradient*  lod) ;

/// @brief Method <ToTestObject>b__2_0 addr 0x21e6f28 size 0x64 virtual false final false
inline ::HoudiniEngineUnity::Test_Gradient* _ToTestObject_b__2_0(::UnityEngine::Gradient*  lod) ;

// Ctor Parameters [CppParam { name: "", ty: "__Test_Gradient_Extensions____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Test_Gradient_Extensions____c(__Test_Gradient_Extensions____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Test_Gradient_Extensions____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Test_Gradient_Extensions____c(__Test_Gradient_Extensions____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Test_Gradient_Extensions____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__1_0

// Static field <>9__2_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__Test_Gradient_Extensions____c, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::Test_Gradient_Extensions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9929))
// CS Name: ::HoudiniEngineUnity::Test_Gradient_Extensions*
class CORDL_TYPE Test_Gradient_Extensions : public ::System::Object {
public:
// Declarations
using __c = ::HoudiniEngineUnity::__Test_Gradient_Extensions____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ToTestObject addr 0x21e6c00 size 0x64 virtual false final false
static inline ::HoudiniEngineUnity::Test_Gradient* ToTestObject(::UnityEngine::Gradient*  self) ;

/// @brief Method ToTestObject addr 0x21e6c64 size 0xf8 virtual false final false
static inline ::ArrayW<::HoudiniEngineUnity::Test_Gradient*,::Array<::HoudiniEngineUnity::Test_Gradient*>*> ToTestObject(::ArrayW<::UnityEngine::Gradient*,::Array<::UnityEngine::Gradient*>*>  self) ;

/// @brief Method ToTestObject addr 0x21e6d5c size 0xfc virtual false final false
static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Gradient*>* ToTestObject(::System::Collections::Generic::List_1<::UnityEngine::Gradient*>*  self) ;

// Ctor Parameters [CppParam { name: "", ty: "Test_Gradient_Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Test_Gradient_Extensions(Test_Gradient_Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Test_Gradient_Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Test_Gradient_Extensions(Test_Gradient_Extensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Test_Gradient_Extensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Gradient_Extensions, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Gradient_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Gradient_Extensions*, "HoudiniEngineUnity", "Test_Gradient_Extensions");
NEED_NO_BOX(::HoudiniEngineUnity::__Test_Gradient_Extensions____c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__Test_Gradient_Extensions____c*, "HoudiniEngineUnity", "Test_Gradient_Extensions/<>c");
